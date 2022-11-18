`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:07:04 10/28/2022
// Design Name:   PC
// Module Name:   G:/University/term5/Az memary/ComputerArthitectureLab/PCtest.v
// Project Name:  ComputerArthitectureLab
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PCtest;

	// Inputs
	reg [31:0] dataInput;
	reg CLK;

	// Outputs
	wire [31:0] dataOut;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.dataInput(dataInput), 
		.CLK(CLK),
		.dataOut(dataOut)
	);

	initial begin
		// Initialize Inputs
		dataInput = 0;
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#1;
        
		// Add stimulus here

	end
	always begin 
		#1;
		CLK = ~CLK; 
		
		
		dataInput = dataInput + 1;
		
		
		
      end
endmodule

