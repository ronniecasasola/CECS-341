`timescale 1ns / 1ps


module ALU_Tester;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [3:0] ALU_Ctl;

	// Outputs
	wire Zero_Flag;
	wire [31:0] Output;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.ALU_Ctl(ALU_Ctl), 
		.Zero_Flag(Zero_Flag), 
		.Output(Output)
	);

	initial begin
		
		A = 0;
		B = 0;
		ALU_Ctl = 0;

		#10;
		
		//AND
		A = 32'h12737398;
		B = 32'h12345678;
      ALU_Ctl = 4'b0000;
		
		#10;
		
		//OR
		A = 32'h12737398;
		B = 32'h12345678;
      ALU_Ctl = 4'b0001;
		
		#10;
		
		//ADD
		A = 32'h12737398;
		B = 32'h12345678;
      ALU_Ctl = 4'b0010;
		
		#10;
		
		//SUB
		A = 32'h12737398;
		B = 32'h12345678;
      ALU_Ctl = 4'b0110;
		
		#10;
		
		//SLT
		A = 32'h12737398;
		B = 32'h12345678;
      ALU_Ctl = 4'b0111;
		
		#10;
		
		//NOR
		A = 32'h12737398;
		B = 32'h12345678;
      ALU_Ctl = 4'b1100;
		
		#10;
		
		//INVALID
		A = 32'h12737398;
		B = 32'h12345678;
      ALU_Ctl = 4'b1111;
		
		#10;
		
		$stop;

	end
      
endmodule

