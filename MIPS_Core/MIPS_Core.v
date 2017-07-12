`timescale 1ns / 1ps


module MIPS_Core(clk, ReadAddr, SEImm, JumpValue, Zero,
						Branch, Jump  );
						
						input clk; //system clock
						input [7:0] ReadAddr; //address of instruction pointed to by PC
						output [31:0] SEImm; // 32bit sign extended immediate
						output [25:0] JumpValue; //26bit portion of jump destination
						output Zero, //Control flow instructions
									Branch,
									Jump;
									
						wire [31:0] I, //instruction bus
										RAM_Address, //address to read data from cache
										Data_to_RAM, //data to store in cache
										Data_from_RAM; //data read from cache
										
						
						//Control Unit signals
						wire RegDst, ALUSrc, MemtoReg, RegWrite,
								MemWrite, Branch, Jump, MemRead;
								
						wire [1:0] ALUOp;
						
						assign JumpValue = I[25:0];
						
						IMEM_128x8 IMEM (.ReadAddress( ReadAddr),
												.Instruction( I ) );
												
						Control CU( .Op(I[31:26] ),
										.RegDst( RegDst  ),
										.ALUSrc( ALUSrc  ),
										.MemtoReg( MemtoReg ),
										.RegWrite( RegWrite ),
										.MemRead(  MemRead   ),
										.MemWrite( MemWrite   ),
										.Branch( Branch  ),
										.ALUOp( ALUOp  ),
										.Jump( Jump     ) );
										
										
						CPU_EU eu1 (.clk( clk  ),
										.RegDst(RegDst  ),
										.ALUSrc( ALUSrc  ),
										.ALUOp( ALUOp    ),
										.RegWrite( RegWrite  ),
										.MemtoReg( MemtoReg   ),
										.Instruction(I[25:0]),
										.SEImm(SEImm  ),
										.RAM_Address( RAM_Address  ),
										.Data_to_RAM( Data_to_RAM ),
										.Data_from_RAM(Data_from_RAM   ),
										.Zero(  Zero )   );
										
										
							DMEM_256x8 DMEM (.clock(clk  ),
													.MemWrite(MemWrite  ),
													.Address(RAM_Address[7:0]),
													.WriteData( Data_to_RAM   ),
													.MemRead( MemRead  ),
													.ReadData(Data_from_RAM   ) );
										
										
										
						


endmodule