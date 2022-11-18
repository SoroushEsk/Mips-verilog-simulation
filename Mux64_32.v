`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:15:21 10/19/2022 
// Design Name: 
// Module Name:    Mux64_32 
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
module Mux64_32(
		input [31:0]pcPlusFour,
		input [31:0]jumpAmount,
		input select,
		output [31:0]PC
	 );
	 
	 assign  PC = select ? jumpAmount : pcPlusFour;
	 /*
	 always @ (pcPlusFour or jumpAmount or select)begin 
		case(select)
			2'b0 : PC <= pcPlusFour;
			2'b1 : PC <= jumpAmount;
		endcase
	 end
	 */
	 
endmodule 