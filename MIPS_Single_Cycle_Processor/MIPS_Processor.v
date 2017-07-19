`timescale 1ns / 1ps

module MIPS_Processor(clk, Zero_Flag
    );
	 
	 input clk;
	 output Zero_Flag;
	 
	 wire	[31:0] PC_Out,
					 PC_Out_plus4,
					 PC_Next,
					 SEImm32,
					 SL2SEImm32,
					 JumpAddress,
					 BranchTarget,
					 BranchMuxOut;
					 
	wire [25:0] I_Offset;
	wire			Zero_Flag,
					Branch_Flag,
					Jump_Flag,
					PC0_Branch1;
					
					
	//PC
	ProgramCounter		PC( .clk( clk	),
								 .PC_In( PC_Next	),
								 .PC_Out( PC_Out )
								 );
								 
	//Adder to add 4 to the PC output
	
	ALU_32			PCIncrementer(
												.A(		PC_Out		),
												.B(		32'h4		),
												.ALU_Ctl(	4'h2		),
												.Zero_Flag(	disconnected			),
												.Output(		PC_Out_plus4				)
												);
												
  MIPS_Core		 	MC0(	.clk(	clk				),
								.ReadAddr(	PC_Out[7:0]	),
								.SEImm(	SEImm32			),
								.JumpValue(	I_Offset),
								.Zero(	Zero_Flag		),
								.Branch(	Banch_Flag		),
								.Jump(	Jump_Flag		)
				);
				
				
	assign JumpAddress = { PC_Out_plus4[31:28], I_Offset, 2'b00		};
	
	ShiftLeft2_32bit		sl2forBranch(		.In32(	SEImm32		),
														.Out32(	SL2SEImm32		)
														);
														
	ALU_32 BranchTargetAdder(		
											.A(	PC_Out_plus4		),
											.B(	SL2SEImm32		),
											.ALU_Ctl(		4'h2	),
											.Zero_Flag(	disconnected			),
											.Output(	BranchTarget		)
											);
											
	assign PC0_Branch1 =	Zero_Flag	&	Branch_Flag;
	
	
	Mux_2to1_by32	BranchMux(		.In0(		PC_Out_plus4		),
											.In1(		BranchTarget		),
											.Sel(		PC0_Branch1		),
											.Out(		BranchMuxOut		)
											);
											
											
  Mux_2to1_by32	JumpMux(		.In0(		BranchMuxOut		),
										.In1(		JumpAddress		),
										.Sel(		Jump_Flag		),
										.Out(		PC_Next		)
										);


endmodule
