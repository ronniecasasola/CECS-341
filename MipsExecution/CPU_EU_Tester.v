`timescale 1ns / 1ps

module CPU_EU_Tester;

	// Inputs
	reg clk;
	reg RegDst;
	reg ALUSrc;
	reg [1:0] ALUOp;
	reg RegWrite;
	reg MemtoReg;
	reg [25:0] Instruction;
	reg [31:0] Data_from_RAM;

	// Outputs
	wire [31:0] SEImm;
	wire [31:0] RAM_Address;
	wire [31:0] Data_to_RAM;
	wire Zero;
	
	wire[4:0] rs, rt, rd;
	assign rs = Instruction [25:21] , rt = Instruction [20:16] , rd = Instruction [15:11];

	// Instantiate the Unit Under Test (UUT)
	CPU_EU uut (
		.clk(clk), 
		.RegDst(RegDst), 
		.ALUSrc(ALUSrc), 
		.ALUOp(ALUOp), 
		.RegWrite(RegWrite), 
		.MemtoReg(MemtoReg), 
		.Instruction(Instruction), 
		.SEImm(SEImm), 
		.RAM_Address(RAM_Address), 
		.Data_to_RAM(Data_to_RAM), 
		.Data_from_RAM(Data_from_RAM), 
		.Zero(Zero)
	);
	
	always #5 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		ALUSrc = 0;
		ALUOp = 0;
		RegWrite = 0;
		MemtoReg = 0;
		Instruction = 0;
		uut.regf.RF[31] = 32'h13427386;
		
		// Wait 10 ns for the test cases
			#10;
			$display("  ");
			$display("---- Test R- Type Instructions -----");
			$display("  ");
		
		//Test case 1
		@(posedge clk) //assign test signals on positive clock edge
		begin //Test Case 1: nor $30, $31, $31
			RegDst				 = 1'b1;		 //rd determines destination register
			ALUSrc 				 = 1'b0;		 //pass register destination register
			ALUOp 				 = 2'b10;	 //R-type
			RegWrite 			 = 1'b1;		 //write data to register
			MemtoReg 			 = 1'b0; 	 //pass ALU result to RegFile
			Instruction[25:21] = 5'b11111; //rs = $31
			Instruction[20:16] = 5'b11111; //$rt = $31
			Instruction[15:11] = 5'b11110; //rd = $30;
			Instruction[5:0] = 6'b100111; //function code for NOR
		end
		
		//display the result of Test case 1
		@(negedge clk) //result is read on negative edge of clock
							//since register is written on negedge
			begin
			#1; //wait 1 time unit to ensure data is ready to be read
			$display("Test Case 1: nor $30, $31, $31");
			$display("Expected result: $30 <- 0x%h", ~(uut.regf.RF[rs] | uut.regf.RF[rt] ) );
			$display("Actual result: $%d = 0x%h", rd, uut.regf.RF[rd]) ;
			end
			$display(""); //insert blank line in console

		@(posedge clk)
		begin //Test case 2: slt $29, $31, $30
			RegDst = 1'b1;
			ALUSrc = 1'b0;
			ALUOp = 2'b10;
			RegWrite = 1'b1;
			MemtoReg = 1'b0;
			Instruction[25:21] = 5'b11111; //rs = $31
			Instruction[20:16] = 5'b11110; //rt = $30
			Instruction[15:11] = 5'b11101; //rd = $29
			Instruction[5:0] = 6'b101010; //function code for slt
		end
		
		//display the results of Test case 2
		@(negedge clk)
			begin
			#1;
			$display("Test Case 2: slt $29, $31, $30");
			$display("Expected result: $29 <- 0x%h", (uut.regf.RF[rs] < uut.regf.RF[rt] ) );
			$display("Actual result: $%d = 0x%h", rd, uut.regf.RF[rd]) ;
			$display("  ");
			end
			
			
		@(posedge clk)
		begin //Test Case 3: or $28, $30, $31
			RegDst = 1'b1;
			ALUSrc = 1'b0;
			ALUOp = 2'b10;
			RegWrite = 1'b1;
			MemtoReg = 1'b0;
			Instruction[25:21] = 5'b11110; //rs = $30
			Instruction[20:16] = 5'b11111; //rt = $31
			Instruction[15:11] = 5'b11100; //rd = $28;
			Instruction[5:0] = 6'b100101; //function code for or
			
		end
		
		
		//display the results of Test case 3
		@(negedge clk)
			begin
			#1;
			$display("Test Case 3: or $28, $30, $31");
			$display("Expected result: $28 <- 0x%h", (uut.regf.RF[rs] | uut.regf.RF[rt] ) );
			$display("Actual result: $%d = 0x%h", rd, uut.regf.RF[rd]) ;
			$display("  ");
			end
			
			
		@(posedge clk)
		begin //Test Case 4: and $27, $28, $29
			RegDst = 1'b1;
			ALUSrc = 1'b0;
			ALUOp = 2'b10;
			RegWrite = 1'b1;
			MemtoReg = 1'b0;
			Instruction[25:21] = 5'b11100; //rs = $28
			Instruction[20:16] = 5'b11101; //rt = $29
			Instruction[15:11] = 5'b11011; //rd = $27
			Instruction[5:0] = 6'b100100; //function code for and
			
		end
		
		//display the results of test case 4
		@(negedge clk)
			begin
			#1;
			$display("Test Case 4: and $27, $28, $29");
			$display("Expected result: $27 <- 0x%h", (uut.regf.RF[rs] & uut.regf.RF[rt] ) );
			$display("Actual result: $%d = 0x%h", rd, uut.regf.RF[rd]) ;
			$display("  ");
			end
			
			
		@(posedge clk)
		begin //Test Case 5: sub $26, $30, $27
			RegDst = 1'b1;
			ALUSrc = 1'b0;
			ALUOp = 2'b10;
			RegWrite = 1'b1;
			MemtoReg = 1'b0;
			Instruction[25:21] = 5'b11110; //rs = $30
			Instruction[20:16] = 5'b11011; //rt = $27
			Instruction[15:11] = 5'b11010; //rd = $26
			Instruction[5:0] = 6'b100010; //function code for sub
			
		end
		
			//display the results of Test case 5
		@(negedge clk)
			begin
			#1;
			$display("Test Case 5:  sub $26, $30, $27");
			$display("Expected result: $26 <- 0x%h", (uut.regf.RF[rs] - uut.regf.RF[rt] ) );
			$display("Actual result: $%d = 0x%h", rd, uut.regf.RF[rd]) ;
			$display("  ");
			end
			
					
		@(posedge clk)
		begin //Test Case 6: add $25, $31, $31
			RegDst = 1'b1;
			ALUSrc = 1'b0;
			ALUOp = 2'b10;
			RegWrite = 1'b1;
			MemtoReg = 1'b0;
			Instruction[25:21] = 5'b11111; //rs = $31
			Instruction[20:16] = 5'b11111; //rt = $31
			Instruction[15:11] = 5'b11001; //rd = $25
			Instruction[5:0] = 6'b100000; //function code for add
			
		end
		
			//display the results of Test case 6
		@(negedge clk)
			begin
			#1;
			$display("Test Case 6:  add $25, $31, $31");
			$display("Expected result: $25 <- 0x%h", (uut.regf.RF[rs] + uut.regf.RF[rt] ) );
			$display("Actual result: $%d = 0x%h", rd, uut.regf.RF[rd]) ;
			$display("  ");
			end
		
		
			$display("  ");
			$display("---- Test I- Type Instructions -----");
			$display("  ");
			
		
      	
		@(posedge clk)
		begin //test case 7: lw $24, 4($0) Data_from_RAM = 0x12341234
		RegDst = 1'b0;
		ALUSrc = 1'b1;
		ALUOp = 2'b00;
		RegWrite = 1'b1;
		MemtoReg = 1'b1;
		Instruction [25:21] = 5'b00000; //$rs = $0 
		Instruction [20:16] = 5'b11000; //$rt = $24
		Instruction [15:0] = 16'b0000000000000100; //rd = $4   this will be the immediate part 
	   Data_from_RAM = 32'h12341234;
		end
		
		//display the results of TestCase 7
		@(negedge clk)
			begin
			#1;
			$display("Test Case 7:  lw $24, 4($0)");
			$display("Expected result: $24 <- 0x%h", Data_from_RAM  );
		   $display("Expected result: RAM_Address = 0x%h", ( uut.al.A + uut.al.B ) ) ;  
			$display("Actual result: $%d = 0x%h", rt, uut.regf.RF[rt]) ;
			$display("Actual result : RAM_Address = 0x%h",uut.RAM_Address);
			$display("  ");
			end
		
		
			
		@(posedge clk)
		begin //test case 8: sw $31, 12($24) 
		RegDst = 1'bX;
		ALUSrc = 1'b1;
		ALUOp = 2'b00;
		RegWrite = 1'b0;
		MemtoReg = 1'bX;
		Instruction [25:21] = 5'b11000; //$rs = $24 
		Instruction [20:16] = 5'b11111; //$rt = $31
		Instruction [15:0] = 5'b01100; //rd = 12   this will be the immediate part
     		
		end	
		
		//display the results of TestCase 8
		@(negedge clk)
			begin
			#1;
			$display("Test Case 8:  sw $31, 12($24)");
			$display("Expected result: Data_to_RAM <- 0x%h", uut.regf.RF[rt]  );
			 $display("Expected result: RAM_Address = 0x%h", uut.al.A + uut.al.B  ) ;
			$display("Actual result: Data_to_RAM = 0x%h",  Data_to_RAM) ;
			$display("Actual result : RAM_Address = 0x%h",RAM_Address);
			end



	
			$display("  ");
			$display("---- Test I- Type BEQ Instructions -----");
			$display("  ");
			
			@(posedge clk)
		begin //test case 9: beq $24, $24, 0x0003 
		RegDst = 1'bX;
		ALUSrc = 1'b0;
		ALUOp = 2'b01;
		RegWrite = 1'bX;
		MemtoReg = 1'bX;
		Instruction [25:21] = 5'b11000; //$rs = $24 
		Instruction [20:16] = 5'b11000; //$rt = $24
		Instruction [15:0] = 16'b0000000000000011; //$rd = 0x0003  this will be the immediate part
     		
		end	

			//display the results of Test case 9
		@(negedge clk)
			begin
			#1;
			$display("Test Case 9: beq $24, $24, 0x0003 ");
			$display("Expected result: ALU Result <- 0x%h", (uut.regf.RF[rs] - uut.regf.RF[rt]  ) );
			$display("Expected result: Zero <- %d", ( uut.al.Zero_Flag) );
			$display("Actual result: ALU Result = 0x%h",  RAM_Address) ;
			$display("Actual result: Zero = %d",  Zero) ;
			end
		
	end
      
endmodule

