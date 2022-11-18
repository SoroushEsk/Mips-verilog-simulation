`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:41:28 10/19/2022 
// Design Name: 
// Module Name:    InstructionMemory 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module InstructionMemory(
		input [4:0] address,
		input write,
		input CLk,
		input [31:0] memoryInput,
		output reg [31:0] instruction
    );
	 
	 reg [31:0] instructionMemory[4:0];
	 
	 
	 always @ (posedge CLk) begin
			
			instructionMemory[address] = write ? memoryInput : instructionMemory[address];
			
			instruction = instructionMemory[address];
	end
	
	  
	 
endmodule
