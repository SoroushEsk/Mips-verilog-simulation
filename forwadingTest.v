`timescale 1ns / 1ps

module forwadingTest;

	// Inputs
	reg [31:0] data1;
	reg [31:0] data2;

	// Instantiate the Unit Under Test (UUT)
	forwading uut (
		.data1(data1), 
		.data2(data2)
	);

	initial begin
		// Initialize Inputs
		data1 = 0;
		data2 = 0;

		#100;

	end
      
endmodule

