`timescale 1ns / 1ps
module writeBack(
						input [31:00] memoryOut, readReg2,
						input memToReg,
						
						output [31:00] registerWrite
    );
		
		assign registerWrite = memToReg ? memoryOut  : readReg2;

endmodule
