`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:10 10/28/2022 
// Design Name: 
// Module Name:    PC 
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
module PC(
		input [31:0] dataInput, 
		input CLK,
		output reg [31:0] dataOut
    );
	 
	 initial dataOut = 0; 
	 
	 always @ (negedge CLK) begin
			dataOut <= dataInput + 4; 
	 end

endmodule
