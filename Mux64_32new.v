`timescale 1ns / 1ps

module Mux64_32new(
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
