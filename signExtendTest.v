`timescale 1ns / 1ps


module signExtendTest;

	// Inputs
	reg [15:0] immPartInst;

	// Outputs
	wire [31:0] signExt;

	// Instantiate the Unit Under Test (UUT)
	signExtend32 uut (
		.immPartInst(immPartInst), 
		.signExt(signExt)
	);

	initial begin
		// Initialize Inputs
		immPartInst = 0;

		#100;
        
		 		immPartInst = -8;

		#100;
        
		  		immPartInst = 7;

		#100;
        		immPartInst = -1;

		#100;
        
		  		immPartInst = 128;

		#100;
        
		// Add stimulus here

	end
      
endmodule

