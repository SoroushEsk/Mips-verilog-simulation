`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:01:31 10/19/2022
// Design Name:   InstructionMemory
// Module Name:   G:/University/term5/Az memary/ComputerArthitectureLab/InstMemoryTest.v
// Project Name:  ComputerArthitectureLab
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InstructionMemory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module InstMemoryTest;

	// Inputs
	reg [31:0] address;
	reg CLk;
	reg [31:0] instructionMemory [4:0];
	// Outputs
	wire [31:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	InstructionMemory uut (
		.address(address), 
		.CLk(CLk), 
		.instructionMemory(instructionMemory),
		.instruction(instruction)
	);

	initial begin
		// Initialize Inputs
		address = 0;
		CLk = 0;
		instructionMemory[0] = 2'b00001111000011110000111100001111;
		instructionMemory[1] = 2'b11110000111100001111000011110000;
		// Wait 100 ns for global reset to finish
		#1000;
		
		
        
		// Add stimulus here

	end
    always begin
		#1000;
		CLk =  ~CLk;
		address = address + 1;
		end 
		
		
endmodule

