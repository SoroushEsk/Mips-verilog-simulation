`timescale 1ns / 1ps

module FetchModule(
			input hit1,
			input [31:0] branchTarget,
			input Clk,
			input PCSrc,
			output [31:0] inst,
			output [31:0] pcOut,
			output  hit
    );

	wire [31:0] pcWire_;

	wire [31:00] _pcOut;
	
	
	Mux64_32new muxPc (
		 .pcPlusFour(pcOut), 
		 .jumpAmount(branchTarget), 
		 .select(PCSrc), 
		 .PC(pcWire_)
    );
 
	
	PC pcReg (
	 .hit2(hit1),
    .dataInput(pcWire_), 
    .CLK(Clk), 
	 .hit(hit),
    .dataOut(_pcOut)
    );
	 
	 wire [127:0] outOfMemory;
	
	 
	 InstMemory instructionMem (
    .address(_pcOut), 
    .CLk(Clk), 
    .instruction(outOfMemory) 
    );
	 

	 PCAdder pcadder (
    .Pc(_pcOut), 
    .PCPlus(pcOut)
    );

	 InstCache instCacheLevel1 (
    .address(_pcOut), 
    .data(outOfMemory), 
    .Clk(Clk), 
    .inst(inst), 
    .hit(hit)
    );



	 
 

endmodule
