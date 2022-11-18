`timescale 1ns / 1ps



module memoryInstTest;

	// Inputs
	reg [31:0] address;
	reg CLk;

	// Outputs
	wire [127:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	InstMemory uut (
		.address(address), 
		.CLk(CLk), 
		.instruction(instruction)
	);

	always begin
		#10;
		CLk = ~CLk;
	end 
	always begin 
		#20;
		address = address + 1;
	end
	initial begin
		// Initialize Inputs
		address = 0;
		CLk = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here

	end
      
endmodule

