`timescale 1ns / 1ps

module CPU_EU(clk, RegDst, ALUSrc, ALUOp, RegWrite,
					MemtoReg, Instruction, SEImm, RAM_Address,
					Data_to_RAM, Data_from_RAM,
					Zero
					);
					
					
			input clk, //clock signal for synchronous operations
					RegDst, //chooses rd or rt for destination register
					ALUSrc, //chooses ReadData2 or SEImm for ALU_InputB
					RegWrite, //enables a value to be written to a register
					MemtoReg; //selects a value from RAM or from ALU to go to regfile
					
			input [1:0] ALUOp; //ALU Operation Mode control signal
			input [25:0] Instruction; //26 bit portion of instruction used by EU modules
			input [31:0] Data_from_RAM; //value loaded from RAM to be written to a register
			
			output [31:0] SEImm, //sign extended immediate data
					RAM_Address, //RAM address value for load or store
					Data_to_RAM; 	//Register value to be stored in RAM
			output Zero;		//zero flag
			
			
			//internal connection bus declaration
			wire [4:0] WriteRegister; //Register to be written as chosen by RegDstMux
			wire [3:0] ALUCtl; //4 bit control signal to tell ALU what to do
			wire [31:0] ReadData1, //data output 1 from reg file
				       ReadData2, //data output 2 from reg file
					ALU_InputB, //value to feed into the ALU's B input
					RegWriteData, //value to be written to a register
					ALU_Result; //result of ALU computation
							
			Mux2to1_5bit RegDstMux(.Input0 (Instruction[20:16] ),
						.Input1(Instruction[15:11]),
						.Sel (RegDst),
						.Output_Mux(WriteRegister) );
											
			RegFile32 RF32 (.Read1 (Instruction[25:21]),
					.Read2(Instruction[20:16]),
					.WriteReg(WriteRegister),
					.WriteData(RegWriteData),
					.clock(clk),
					.RegWrite(RegWrite),
					.Data1(ReadData1),
					.Data2(ReadData2) );
									
				SignExtend_16to32 signextend( .SE_In(Instruction[15:0] ),
							.SE_Out (SEImm) );
														
				Mux2to1_32bit aLsrc (.Input0 (ReadData2) ,
							.Input1 (SEImm) ,
							.Sel (ALUSrc),
							.Output_Mux (ALU_InputB) );
									
				ALU_Control ac (.FuncCode (Instruction [5:0] ),
						.ALU_Op (ALUOp) ,
						.ALU_Ctl(ALUCtl) );
									
				ALU al (.ALUControl (ALUControl) ,
					.A(ReadData1),
					.B(ALU_InputB),
					.Result(Result),
					.Zero_Flag(Zero) );
							
				Mux2to1_32bit memtoReg (.Input0( ALU_Result ),
							.Input1( Data_from_RAM )  ,
							.Sel(MemtoReg),
							.Output_Mux(RegWriteData) );
													
				assign RAM_Address = ALU_Result;
			assign Data_to_RAM = ReadData2;


endmodule
