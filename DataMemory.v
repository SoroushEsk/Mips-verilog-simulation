`timescale 1ns / 1ps

module DataMemory(input [31:00] address, data,
                  input clk,
                  input dataRead, dataWrite,
                  output[31:00] outData,
						output reg hit
    );
	 
	wire [127:000] memoryInput;




	dataMemoryModule mainDataMemory (
		 .address(address), 
		 .inputData(data), 
		 .CLk(clk), 
		 .writeMem(dataWrite), 
		 .data(memoryInput)
		 );
		 
	dataMemoryCachelvl1 dataCache (
    .address(address), 
    .inputData(inputData), 
    .memoryInput(memoryInput), 
    .Clk(clk), 
    .readMem(dataRead), 
    .writeMem(dataWrite), 
    .data(data), 
    .hit(hit)
    );





endmodule
