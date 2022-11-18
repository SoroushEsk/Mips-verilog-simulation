`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

module InstCache(
		input [31:0] address,
		input [127:0] data,
		input Clk,
		output reg [31:0] inst,
		output reg hit
    );
		
		reg [153:0] cacheLevel1 [7:0];
		
		integer i;
		initial begin
			for ( i = 0 ; i < 8 ; i = i + 1) begin 
					cacheLevel1[i] = 0;
			end // for loop
			inst = 0;
			hit  = 0;
		end // initial block
			
		always @ (data) begin
			// change cache amount at fifth clock
			cacheLevel1[address[6:4]][127:0]   <= data;
			cacheLevel1[address[6:4]][152:128] <= address[31:7];
			cacheLevel1[address[6:4]][153]     <= 1;
			
		end // changing cache amount end

			
		always @ (posedge Clk) begin
			$display ( "time : %0t   address : %d    data : %h", $time , address , data);
			if( cacheLevel1[address[6:4]][152:128] == address[31:7] && cacheLevel1[address[6:4]][153] == 1) begin
				// check offset
				case(address[3:2])
					2'b00: inst <= cacheLevel1[address[6:4]][31:0];
					2'b01: inst <= cacheLevel1[address[6:4]][63:32];
					2'b10: inst <= cacheLevel1[address[6:4]][95:64];
					2'b11: inst <= cacheLevel1[address[6:4]][127:96];

				endcase
				hit <= 1;
			end // if end 
			else begin
				hit  <= 0;
			end // else
		end // always end block
		
endmodule
