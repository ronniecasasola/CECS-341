`timescale 1ns / 1ps


module Control_Tester;

	// Inputs
	reg [5:0] Op;

	// Outputs
	wire [1:0] ALUOp;
	wire RegDst;
	wire ALUSrc;
	wire MemtoReg;
	wire RegWrite;
	wire MemRead;
	wire MemWrite;
	wire Branch;
	wire Jump;

	// Instantiate the Unit Under Test (UUT)
	Control uut (
		.Op(Op), 
		.ALUOp(ALUOp),
		.RegDst(RegDst), 
		.ALUSrc(ALUSrc), 
		.MemtoReg(MemtoReg), 
		.RegWrite(RegWrite), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.Branch(Branch), 
		.Jump(Jump)
	);

	initial begin
	
		// Test case 0 R-Type
		Op = 6'h000000;
		#10;
		
		// Test case 1 lw
		Op = 6'h100011;
		#10;
		
		// Test case 2 sw
		Op = 6'h101011;
		#10;
		
		//Test case 3 beq
		Op = 6'h000100;
		#10;
		
		// Test case 4 R-Type
		Op = 6'h000010;
		#10;
		
		// Test case 5 incorrect
		Op = 6'h001100;
		#10;
		
		$stop;

	end
      
endmodule

