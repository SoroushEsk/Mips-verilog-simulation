`timescale 1ns / 1ps
module PCAdder(
	input [31:00] Pc,
	output [31:00] PCPlus
    );
	 assign PCPlus = Pc + 4;


endmodule
