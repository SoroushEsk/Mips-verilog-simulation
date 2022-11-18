`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:00:53 11/12/2022 
// Design Name: 
// Module Name:    Mux2NToN 
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
module Mux2NToN  #(parameter N = 32)(
		input [N - 1:0] zeroSource,
		input [N - 1:0] oneSource,
		input select,
		output [N - 1:0] out
    );
	 
	 assign out = select ? oneSource : zeroSource;


endmodule
