`timescale 1ns / 1ps

module EXE_MEMRegister(
								input clk, hit,
								input  [4:0] rd,
								input  [31:00] ALUReasult, readData2,
								input  [8:0] controlSig,
								
								output reg [8:0] controlSigOut,
								output reg [4:0] rdOut,
								output reg [31:00] ALUReasultOut, readData2Out
								
    );	
	 initial begin 
		controlSigOut = 0;
		rdOut  			= 0;
		ALUReasultOut  = 0;
		readData2Out	= 0;
	 end
	 always @ ( negedge clk ) begin 
		if ( hit ) begin 
			
			controlSigOut  = controlSig;
			rdOut  			= rd;
			ALUReasultOut  = ALUReasult;
			readData2Out	= readData2;
		end
	end
endmodule
