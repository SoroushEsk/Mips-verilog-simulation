`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:07:24 11/13/2022
// Design Name:   InstCache
// Module Name:   G:/University/term5/Az memary/ComputerArthitectureLab/InstCacheTest.v
// Project Name:  ComputerArthitectureLab
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InstCache
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module InstCacheTest;

	// Inputs
	reg [31:0] address;
	reg [127:0] data;
	reg Clk;

	// Outputs
	wire [31:0] inst;
	wire hit;

	// Instantiate the Unit Under Test (UUT)
	InstCache uut (
		.address(address), 
		.data(data), 
		.Clk(Clk), 
		.inst(inst), 
		.hit(hit)
	);


	always begin
		#10;
		Clk = ~Clk;
	end
	
	initial begin
		// Initialize Inputs
		address = 0;
		data = 0;
		Clk = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here
		
		data = 128'h000000FFFFFFFFFFFFFFFFFF;
		address = 128'hABCA333;
		 #25;
		 
		 address = 128'd1345;
		  
		 #26;
		 
		 address  = 128'hABCA333; 
	end
      
endmodule

