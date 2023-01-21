`timescale 1ns / 1ps

module IFIDRegister(
		input      [31:00] nextPC,
		input      [31:00] inst,
		input      Clk,
		input      hit,
		output reg [31:00] outInst,
		output reg [31:00] outNextPC
    );
	 
	 initial begin
			outInst   = 0;
			outNextPC = 0;
	 end
	
	 always @ (negedge Clk) begin
			
			if ( hit != 0 ) begin
				outInst     =     inst;
				outNextPC   =    nextPC;
			end
	 end
	 
				

endmodule
