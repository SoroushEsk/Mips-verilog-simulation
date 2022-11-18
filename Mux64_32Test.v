`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:27:55 10/19/2022
// Design Name:   Mux64_32
// Module Name:   G:/University/term5/Az memary/ComputerArthitectureLab/Mux64_32Test.v
// Project Name:  ComputerArthitectureLab
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux64_32
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Mux64_32Test;

	// Inputs
	reg [31:0] pcPlusFour;
	reg [31:0] jumpAmount;
	reg select;

	// Outputs
	wire [31:0] PC;

	// Instantiate the Unit Under Test (UUT)
	Mux64_32 uut (
		.pcPlusFour(pcPlusFour), 
		.jumpAmount(jumpAmount), 
		.select(select), 
		.PC(PC)
	);

	initial begin
		// Initialize Inputs
		pcPlusFour = 1;
		jumpAmount = 0;
		select = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always begin 
		#100;
		select = ~select;
      end
endmodule

