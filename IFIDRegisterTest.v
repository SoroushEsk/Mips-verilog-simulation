`timescale 1ns / 1ps

module IFIDRegisterTest;

	// Inputs
	reg [31:0] nextPC;
	reg [31:0] inst;
	reg Clk;
	reg hit;

	// Outputs
	wire [31:0] outInst;
	wire [31:0] outNextPC;

	// Instantiate the Unit Under Test (UUT)
	IFIDRegister uut (
		.nextPC(nextPC), 
		.inst(inst), 
		.Clk(Clk), 
		.hit(hit), 
		.outInst(outInst), 
		.outNextPC(outNextPC)
	);

	initial begin
		// Initialize Inputs
		nextPC = 0;
		inst = 0;
		Clk = 0;
		hit = 0;

		#35;
        
		nextPC = 8;
		inst = 456;
		hit = 1;
		
		#40;
		
		nextPC = 54;
		inst = 456;

		
		#40;
		nextPC = 798;
		inst =1354;

		
		#40;
		nextPC = 7489;
		inst = 465;

		
		#40;
		hit = 0;
		nextPC = 7894;
		inst = 54;

		
		#40;
		nextPC = 0;
		inst = 0;

		
		#40;		
		hit = 1;
		nextPC = 765164;
		inst = 5448948;
	end
   always begin
			
			#10;
			Clk = ~Clk;
	end
endmodule

