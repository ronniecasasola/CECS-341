`timescale 1ns / 1ps

module ALUandALUControl_Tester;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [5:0] FuncCode;
	reg [1:0] ALU_Op;

	// Outputs
	wire Zero_Flag;
	wire [31:0] Output;

	// Instantiate the Unit Under Test (UUT)
	ALUandALUControl uut (
		.FuncCode(FuncCode), 
		.ALU_Op(ALU_Op), 
		.A(A), 
		.B(B), 
		.Output(Output), 
		.Zero_Flag(Zero_Flag)
	);

	initial begin
	
		//ADD
		FuncCode = 6'b100000;
		ALU_Op = 2'b10;
		A = 32'h12737398;
		B = 32'h12737398+1;
		
		#10;
		
		//SUB
		FuncCode = 6'b100010;
		ALU_Op = 2'b10;
		A = 32'h12737398;
		B = 32'h12737398+1;
		
		#10;
		
		//AND
		FuncCode = 6'b100100;
		ALU_Op = 2'b10;
		A = 32'h12737398;
		B = 32'h12737398+1;
		
		#10;
		
		//OR
		FuncCode = 6'b100101;
		ALU_Op = 2'b10;
		A = 32'h12737398;
		B = 32'h12737398+1;
		
		#10;
		
		//SLT
		FuncCode = 6'b101010;
		ALU_Op = 2'b10;
		A = 32'h12737398;
		B = 32'h12737398+1;
		
		#10;
		
		//NOR
		FuncCode = 6'b100111;
		ALU_Op = 2'b10;
		A = 32'h12737398;
		B = 32'h12737398+1;
		
		#10;
		
		//address calc
		FuncCode = 6'b111111;
		ALU_Op = 2'b00;
		A = 32'h12737398;
		B = 32'h12737398+1;
		
		#10;
		
		//equality comp
		FuncCode = 6'b111111;
		ALU_Op = 2'b01;
		A = 32'h12737398;
		B = 32'h12737398+1;
		
		#10;
		
		//invalid
		FuncCode = 6'b000000;
		ALU_Op = 2'b10;
		A = 32'h12737398;
		B = 32'h12737398+1;
		
		#10;
        
		$stop;

	end
      
endmodule

