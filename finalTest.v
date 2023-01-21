`timescale 1ns / 1ps

module finalTest;

	// Inputs
	reg Clk;
	wire [31:00] instruction;
	// Instantiate the Unit Under Test (UUT)
	MipsArthitecture uut (
		.Clk(Clk),
		.instruction(instruction)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;

		#10;
        


	end
      
	always begin
	#10;
	Clk <= ~Clk;
	end
endmodule


