`timescale 1ns / 1ps
module Mux2NToN  #(parameter N = 32)(
		input [N - 1:0] zeroSource,
		input [N - 1:0] oneSource,
		input select,
		output [N - 1:0] out
    );
	 
	 assign out = select ? oneSource : zeroSource;


endmodule
