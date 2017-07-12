`timescale 1ns / 1ps

module ALU(ALUControl, A, B, Result, Zero_Flag);
	input [3:0] ALUControl;
	input [31:0] A, B;
	output reg [31:0] Result;
	output  Zero_Flag;

	
	always @(ALUControl, A, B) begin
		case(ALUControl)
		4'b0000: Result = A & B;	//AND
		4'b0001: Result =  A | B;	//OR
		4'b0010: Result = A + B;	//Add
		4'b0110: Result = A - B; 	//Subtract
		4'b0111: Result = ( A < B ) ? 32'b1 : 32'b0; //Set on less than
		4'b1100: Result = ~( A | B ); //NOR
		default : Result = 32'hX;
					 
					 
		
		
		endcase
		
		// assign Zero_Flag = (Output) ? 1'b0 : 1'b1;
		
	end
	 
	assign Zero_Flag = (Result) ? 1'b0 : 1'b1;
	
	


endmodule