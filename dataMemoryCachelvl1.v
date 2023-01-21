`timescale 1ns / 1ps

module dataMemoryCachelvl1(
		input [31:0] address, inputData,
		input [127:0] memoryInput,
		input Clk, readMem, writeMem,
		output reg [31:0] data,
		output reg hit
    );
		
		reg [153:0] cacheLevel1 [7:0];
		
		integer i;
		initial begin
			for ( i = 0 ; i < 8 ; i = i + 1) begin 
					cacheLevel1[i] = 0;
			end // for loop
			data = 0;
			hit  = 0;
		end // initial block
		reg [31:00] preAddress;
		always @ (memoryInput) begin
			// change cache amount at fifth clock
			preAddress  = address + 4;
			cacheLevel1[preAddress[6:4]][127:0]   = memoryInput;
			cacheLevel1[preAddress[6:4]][152:128] = preAddress[31:7];
			cacheLevel1[preAddress[6:4]][153]     = 1'b1;
		end // changing cache amount end

			
		always @ (posedge Clk) begin
			if( cacheLevel1[address[6:4]][152:128] == address[31:7] && cacheLevel1[address[6:4]][153] == 1) begin
				if ( readMem ) begin
				// check offset
					case(address[3:2])
						2'b00: data = cacheLevel1[address[6:4]][31:0];
						2'b01: data = cacheLevel1[address[6:4]][63:32];
						2'b10: data = cacheLevel1[address[6:4]][95:64];
						2'b11: data = cacheLevel1[address[6:4]][127:96];
						
					endcase
					
					end // if end
				if ( writeMem )begin 
									// check offset
					case(address[3:2])
						2'b00: cacheLevel1[address[6:4]][31:0]   = inputData;
						2'b01: cacheLevel1[address[6:4]][63:32]  = inputData;
						2'b10: cacheLevel1[address[6:4]][95:64]  = inputData;
						2'b11: cacheLevel1[address[6:4]][127:96] = inputData;
						
					endcase
					
				end
				hit = 1;
			end // if end 
			else begin
				//if hit == 0 in that case cpu execute same dataruction again so 
				//in control unit I designed a noOpration dataruction that executes 
				//without changesing memory and registers 
				// just opcode needed to be changed
				data = 32'b00001000000000000000000000000000;
				hit  = 0;
			end // else
		end // always end block


endmodule
