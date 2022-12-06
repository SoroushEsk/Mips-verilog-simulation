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
		reg [31:00] preAddress;
		always @ (data) begin
			// change cache amount at fifth clock
			preAddress  = address + 4;
			cacheLevel1[preAddress[6:4]][127:0]   = data;
			cacheLevel1[preAddress[6:4]][152:128] = preAddress[31:7];
			cacheLevel1[preAddress[6:4]][153]     = 1'b1;
			$display ( " cache amount : %H       %H" , cacheLevel1[preAddress[6:4]],			cacheLevel1[preAddress[6:4]][153]      );
		end // changing cache amount end

			
		always @ (posedge Clk) begin
			$display ( "time : %0t   address : %d    data : %h", $time , address , data);
			$display ( "*******************  ,, cache : %H       %h" , cacheLevel1[address[6:4]],cacheLevel1[address[6:4]][153]);
			if( cacheLevel1[address[6:4]][152:128] == address[31:7] && cacheLevel1[address[6:4]][153] == 1) begin
				// check offset
				case(address[3:2])
					2'b00: inst = cacheLevel1[address[6:4]][31:0];
					2'b01: inst = cacheLevel1[address[6:4]][63:32];
					2'b10: inst = cacheLevel1[address[6:4]][95:64];
					2'b11: inst = cacheLevel1[address[6:4]][127:96];
					
				endcase
				hit = 1;
			end // if end 
			else begin
				//if hit == 0 in that case cpu execute same instruction again so 
				//in control unit I designed a noOpration instruction that executes 
				//without changesing memory and registers 
				// just opcode needed to be changed
				inst = 32'b00001000000000000000000000000000;
				hit  = 0;
			end // else
		end // always end block
		
endmodule
