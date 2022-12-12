`timescale 1ns / 1ps
module AdderTest;

	// Inputs
	reg [31:0] first;
	reg [31:0] second;

	// Outputs
	wire [31:0] sum;

	// Instantiate the Unit Under Test (UUT)
	Adder uut (
		.first(first), 
		.second(second), 
		.sum(sum)
	);

	initial begin
		// Initialize Inputs
		first = 45;
		second = 89654;


		#100;
        
		first = 0;
		second = 65498;


		#100;
        

		
		first = 7984;
		second = 12365;


		#100;
        


	end
      
endmodule

