`timescale 1ns / 1ps

module PC(
		input hit2,
		input [31:0] dataInput, 
		input CLK,
		input hit,
		output reg [31:0] dataOut
    );
	 
	 
	 initial dataOut = 0; 
	 
	 always @ (negedge CLK) begin
			if ( hit == 1)
				if ( hit2 == 1 )
			     dataOut <= dataInput; 
	 end

endmodule
