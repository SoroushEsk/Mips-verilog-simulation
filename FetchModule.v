`timescale 1ns / 1ps

module FetchModule(
			input [31:0] branchTarget,
			input Clk,
			input PCSrc,
			input  [31:0] nextPC,
			output [31:0] inst,
			output [31:0] pcOut,
			output  hit
    );

	wire [31:0] pcWire_;
	Mux64_32 muxPc (
		 .pcPlusFour(nextPC), 
		 .jumpAmount(branchTarget), 
		 .select(PCSrc), 
		 .PC(pcWire_)
    );
 
	wire [31:00] _pcOut;
	PC pcReg (
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

	 always @ (posedge Clk) begin 

		$display ("time : %0t t instMem : %h ", $time  , outOfMemory );
		
	 end

	 
 

endmodule
