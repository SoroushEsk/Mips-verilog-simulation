`timescale 1ns / 1ps



module InstMemTest;

	// Inputs
	reg [3:0] address;
	reg CLk;
	reg [31:0] memoryInput;

	// Outputs
	wire [31:0] instruction;
	// Instantiate the Unit Under Test (UUT)
	InstructionMemory uut (
		.address(address), 
		.write(write), 
		.CLk(CLk), 
		.memoryInput(memoryInput), 
		.instruction(instruction)
	);
	
	initial begin
		// Initialize Inputs
		address = 0;
		write = 1;
		CLk = 0;
		memoryInput = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here

	end
		always begin 
		#10;
		
		CLk <= ~CLk;
		
		address <= CLk ? (address + 4) : address;
		  
		memoryInput <= memoryInput + 1;
		
		case(memoryInput)
			32'b00000000000000000000000000001111 : write <= 0;
		endcase
      end
      
endmodule

