`timescale 1ns / 1ps

module Mem_Wb_register(
								 input clk, hit ,
								 input [8:0] controlSig,
								 input [31:00] readReg2, ALUReasult, 
								 input [4:0] rd,
								 
								 output reg [8:0] controlSigOut,
								 output reg [31:00] readReg2Out, ALUReasultOut,
								 output reg [4:0] rdOut
    );
	 
	 initial begin 
		controlSigOut   = 0;
		readReg2Out 	 = 0;
		ALUReasultOut   = 0;
		rdOut				 = 0;
	 end
	 
	 always @ ( negedge clk )begin
		if ( hit ) begin 
				controlSigOut  = controlSig;
				readReg2Out    = readReg2;
				ALUReasultOut  = ALUReasult;
				rdOut				= rd;
		end
	 end


endmodule
