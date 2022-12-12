`timescale 1ns / 1ps

module ALUcontrolTest;

	// Inputs
	reg [2:0] ALUop;
	reg [5:0] func;

	// Outputs
	wire [3:0] ALUControl;

	// Instantiate the Unit Under Test (UUT)
	ALUcontrol uut (
		.ALUop(ALUop), 
		.func(func), 
		.ALUControl(ALUControl)
	);

	initial begin
		// Initialize Inputs
		ALUop = 0;
		func = 1;

		#100;
		
		ALUop = 0;
		func = 0;

		#100;		


		ALUop = 0;
		func = 2;

		#100; 
		
		ALUop = 3'b001;
		func = 0;

		#100;
		
		ALUop = 3'b010;
		func = 0;

		#100;
		ALUop = 3'b011;
		func = 0;

		#100;

	end
      
endmodule

