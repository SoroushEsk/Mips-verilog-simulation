`timescale 1ns / 1ps

module forwardingTEst;

	// Inputs
	reg [31:0] data1;
	reg [31:0] data2;
	reg [4:0] nextRD;
	reg [4:0] nextnextRD;
	reg [4:0] rt;
	reg [4:0] rs;

	// Outputs
	wire [31:0] outData;
	wire first;
	wire second;

	// Instantiate the Unit Under Test (UUT)
	forwading uut (
		.data1(data1), 
		.data2(data2), 
		.nextRD(nextRD), 
		.nextnextRD(nextnextRD), 
		.rt(rt), 
		.rs(rs), 
		.outData(outData), 
		.first(first), 
		.second(second)
	);

	initial begin
		// Initialize Inputs
		data1 = 3;
		data2 = 4;
		nextRD = 7;
		nextnextRD = 1;
		rt = 4;
		rs = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

		data1 = 56;
		data2 = 76;
		nextRD =8 ;
		nextnextRD = 1;
		rt = 1;
		rs = 6;

		// Wait 100 ns for global reset to finish
		#100;
				data1 = 234;
		data2 = 324;
		nextRD = 23;
		nextnextRD = 1;
		rt = 23;
		rs = 0;

		// Wait 100 ns for global reset to finish
		#100;
				data1 = 43214;
		data2 = 213443;
		nextRD = 23;
		nextnextRD = 11;
		rt = 12;
		rs = 23;

		// Wait 100 ns for global reset to finish
		#100;		data1 = 0;
		data2 = 0;
		nextRD = 0;
		nextnextRD = 0;
		rt = 0;
		rs = 0;

		// Wait 100 ns for global reset to finish
		#100;
	end
      
endmodule

