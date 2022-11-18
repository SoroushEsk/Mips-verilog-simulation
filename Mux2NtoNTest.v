`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:05:12 11/12/2022
// Design Name:   Mux2NToN
// Module Name:   G:/University/term5/Az memary/ComputerArthitectureLab/Mux2NtoNTest.v
// Project Name:  ComputerArthitectureLab
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux2NToN
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Mux2NtoNTest;

	// Inputs
	parameter N = 50;
	reg [N - 1:0] zeroSource;
	reg [N - 1:0] oneSource;
	reg select;

	// Outputs
	wire [N - 1:0] out;

	// Instantiate the Unit Under Test (UUT)
	Mux2NToN #(.N(N)) uut (
		.zeroSource(zeroSource), 
		.oneSource(oneSource), 
		.select(select), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		zeroSource = 5;
		oneSource = 0;
		select = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		zeroSource = 3;
		oneSource = 55;
		select = 1;
		
		#100;
		
		
      zeroSource = 354;
		oneSource = 55;
		select = 0;
		// Add stimulus here

	end
      
endmodule

