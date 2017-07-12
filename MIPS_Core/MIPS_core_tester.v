`timescale 1ns / 1ps

module MIPS_core_tester;

	//inputs
	reg clk;
	reg [7:0] ReadAddr;
	
	//outputs 
	wire [31:0] SEImm;
	wire [25:0] JumpValue;
	wire Zero;
	wire Branch;
	wire Jump;
	
	MIPS_Core uut(  .clk(clk),
						.ReadAddr(ReadAddr),
						.SEImm(SEImm),
						.JumpValue(JumpValue),
						.Zero(Zero),
						.Branch(Branch),
						.Jump(Jump) );
						
	integer i;
	
	always #5 clk = ~clk;
	
	initial begin
		//initialize inputs
		clk = 0;
		ReadAddr = 0;
		
		//initialize reg values
		for(i = 1; i < 32; i = i+1)
			uut.eu1.RF32.RF[i] = i;
			
		//initialize DMEM
		for(i = 0; i < 256; i = i+1)
			uut.DMEM.DM[i] = $random;
			
		//initialize IMEM with instructions
			//instruction 0 : and $31, $22, $13
			{uut.IMEM.IM[0],uut.IMEM.IM[1],uut.IMEM.IM[2],uut.IMEM.IM[3]} = 32'h02CDF824; 
			
			//instruction 1: slt $1, $2, $3
			{uut.IMEM.IM[4],uut.IMEM.IM[5],uut.IMEM.IM[6],uut.IMEM.IM[7]} = 32'h0043082A;
			
			//instruction 2: lw $12, 20($20)
			{uut.IMEM.IM[8],uut.IMEM.IM[9],uut.IMEM.IM[10],uut.IMEM.IM[11]} = 32'h8E8C0014;
			
			//instruction 3: sw $4, 0($0)
			{uut.IMEM.IM[12],uut.IMEM.IM[13],uut.IMEM.IM[14],uut.IMEM.IM[15]} = 32'hAC040000;
			
			//instruction 4: beq $5, $6, 0xffffffff
			{uut.IMEM.IM[16],uut.IMEM.IM[17],uut.IMEM.IM[18],uut.IMEM.IM[19]} = 32'h10A6FFFF;
			
			//instruction 5: sub $7, $8, $9
			{uut.IMEM.IM[20],uut.IMEM.IM[21],uut.IMEM.IM[22],uut.IMEM.IM[23]} = 32'h01093822;
			
			//instruction 6: jump to IMEM location 0x00400010
			{uut.IMEM.IM[24],uut.IMEM.IM[25],uut.IMEM.IM[26],uut.IMEM.IM[27]} = 32'h08100004;
		
			
			//step through and execute instructions on consecutive clock cycles
			for(i = 0; i < 7; i = i+1)
				@(posedge clk) begin
					ReadAddr = i*4;
					#6;
					
					case(i)
						
						0: begin
							$display("Test case 1: and $31, $22, $13");
							$display("Expected result: $31 = 0x%h", uut.eu1.RF32.RF[22] & uut.eu1.RF32.RF[13] );
							$display("Actual result: $31 = 0x%h",uut.eu1.RF32.RF[31] );
							$display(" ");
							end
					
							
						1: begin
							$display("Test case 2: slt $1, $2, $3");
							$display("Expected result: $31 = 0x%h", uut.eu1.RF32.RF[2] < uut.eu1.RF32.RF[3] );
							$display("Actual result: $31 = 0x%h",uut.eu1.RF32.RF[1] );
							$display(" ");
							end
							
						2: begin
						$display("Test case 3: lw $12, 20($20)");
						$display("Expected result : $12 = 0x%h", 
										{ uut.DMEM.DM[40],
											uut.DMEM.DM[41],
											uut.DMEM.DM[42],
											uut.DMEM.DM[43] } );
						$display("Actual result: $12 = 0x%h",uut.eu1.RF32.RF[12] );
						$display(" ");
						end
						
						3: begin
						$display("Test case 4: sw $4, 0($0)");
						$display("Expected result: $4 = 0x%h", uut.eu1.RF32.RF[4]  );
						#5; //delay to wait for store to occur on next pos clock edge
						$display("Expected result : $4 = 0x%h", 
										{ uut.DMEM.DM[0],
											uut.DMEM.DM[1],
											uut.DMEM.DM[2],
											uut.DMEM.DM[3] } );
							$display(" ");
							end
							
						
						4: begin
						$display("Test case 5: beq $5, $6, 0xffff");
						$display("Expected results:   ");
						$display("Zero = 0");
						$display("Branch = 1");
						$display("SEImm = 0xffffffff");
						$display("Actual results:   ");
						$display("Zero = %b",Zero);
						$display("Branch = %b",Branch);
						$display("SEImm = 0x%h",SEImm);
						$display(" ");
						end
						
						5: begin
						$display("Test case 6: sub $7, $8, $9");
						$display("Expected result: $7 = 0x%h", uut.eu1.RF32.RF[8] - uut.eu1.RF32.RF[9] );	
						$display("Actual result: $7 = 0x%h",uut.eu1.RF32.RF[7] );
						$display("  ");
						end
							
							
						6: begin
							$display("Test case 7: jump to IMEM address 0x00400010");
							$display("Expected result: JumpValue = 0x0100004");
							$display("Actual result: JumpValue = 0x%h",JumpValue );
							$display("  ");
							end
							
						default: begin
							$display("Invalid test case.");
							end
						
						
						endcase
						end //end of @posedge(clk) within the for loop
						#20 $stop;
								
	end //end of initial block

endmodule