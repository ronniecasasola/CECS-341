`timescale 1ns / 1ps


module ALU_Control_Tester;

	// Inputs
	reg [5:0] FuncCode;
	reg [1:0] ALU_Op;

	// Outputs
	wire [3:0] ALU_Ctl;

	// Instantiate the Unit Under Test (UUT)
	ALU_Control uut (
		.FuncCode(FuncCode), 
		.ALU_Op(ALU_Op), 
		.ALU_Ctl(ALU_Ctl)
	);

	initial begin
		//ADD
		FuncCode = 6'b100000;
		ALU_Op = 2'b10;
		#10;
        
		//Subtract
		FuncCode = 6'b100010;
		ALU_Op = 2'b10;
		#10;
		
		//AND
		FuncCode = 6'b100100;
		ALU_Op = 2'b10;
		#10;
		
		//OR
		FuncCode = 6'b100101;
		ALU_Op = 2'b10;
		#10;
		
		//SLT
		FuncCode = 6'b101010;
		ALU_Op = 2'b10;
		#10;
		
		//NOR
		FuncCode = 6'b100111;
		ALU_Op = 2'b10;
		#10;
		
		//address calculation
		FuncCode = 6'b111111;
		ALU_Op = 2'b00;
		#10;
		
		//equality comparison
		FuncCode = 6'b111111;
		ALU_Op = 2'b01;
		#10;
		
		//invaid case to test default
		FuncCode = 6'b000000;
		ALU_Op = 2'b10;
		#10;
		
		$stop;
        
		  end
      
endmodule

