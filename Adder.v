`timescale 1ns / 1ps
module Adder #(parameter N = 32)(
			input [N-1:00] first,
			input [N-1:00] second,
			output[N-1:00] sum
    );
	 
	 assign sum = first + second;


endmodule
