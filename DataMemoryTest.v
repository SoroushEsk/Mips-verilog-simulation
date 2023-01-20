`timescale 1ns / 1ps

module DataMemoryTest;

	// Inputs
	reg [31:0] address;
	reg [31:0] data;
	reg clk;
	reg dataRead;
	reg dataWrite;

	// Outputs
	wire [31:0] outData;
	wire hit;

	// Instantiate the Unit Under Test (UUT)
	DataMemory uut (
		.address(address), 
		.data(data), 
		.clk(clk), 
		.dataRead(dataRead), 
		.dataWrite(dataWrite), 
		.outData(outData), 
		.hit(hit)
	);

	initial begin
		// Initialize Inputs
		address = 0;
		data = 0;
		clk = 0;
		dataRead = 0;
		dataWrite = 0;


		#20
		address = 56;
		data = 0;
		dataRead = 1;
		dataWrite = 0;


		#20;        
		address = 56;
		data = 0;
		dataRead = 0;
		dataWrite = 0;


		#20;
		address = 56;
		data = 0;
		dataRead = 0;
		dataWrite = 0;


		#20;
		address = 56;
		data = 0;
		dataRead = 0;
		dataWrite = 0;


		#20;
		address = 57;
		data = 0;
		dataRead = 0;
		dataWrite = 0;


		#20;
		address = 85;
		data = 0;
		dataRead = 1;
		dataWrite = 0;


		#20;
		data = 0;

		dataWrite = 0;


		#20;		
		data = 0;

		dataWrite = 0;


		#20;
		address = 68;
		data = 4523;
		dataWrite = 1;


		#10;		

	end
      
	always begin
		#10
		clk = ~clk;
	end
endmodule

