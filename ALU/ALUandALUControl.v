`timescale 1ns / 1ps

module ALUandALUControl(
    input [5:0] FuncCode,
    input [1:0] ALU_Op,
    input [31:0] A,
    input [31:0] B,
    output [31:0] Output,
	 output Zero_Flag
	 
    );

wire [3:0] ALU_Ctl;
						
		ALU_Control	a1(FuncCode , ALU_Op, ALU_Ctl);
						
		ALU alu1 (ALU_Ctl, A, B, Output, Zero_Flag);

endmodule
