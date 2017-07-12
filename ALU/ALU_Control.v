`timescale 1ns / 1ps

module ALU_Control(
    input [5:0] FuncCode,
    input [1:0] ALU_Op,
    output reg [3:0] ALU_Ctl
    );

always @(FuncCode, ALU_Op) begin
	
		casex({FuncCode, ALU_Op})
		{6'b100000, 2'b10} : ALU_Ctl = 4'b0010; //ADD
		{6'b100010, 2'b10} : ALU_Ctl = 4'b0110; //SUB
		{6'b100100, 2'b10} : ALU_Ctl = 4'b0000; //AND
		{6'b100101, 2'b10} : ALU_Ctl = 4'b0001; //OR
		{6'b101010, 2'b10} : ALU_Ctl = 4'b0111; //SLT
		{6'b100111, 2'b10} : ALU_Ctl = 4'b1100; //NOR
		{6'bXXXXXX, 2'b00} : ALU_Ctl = 4'b0010; //address calculation
		{6'bXXXXXX, 2'bX1} : ALU_Ctl = 4'b0110; //equality comparison
		default: ALU_Ctl = 4'bXXXX;
		
		
		
		endcase
		
		end

endmodule
