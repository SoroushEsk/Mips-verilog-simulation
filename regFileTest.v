`timescale 1ns / 1ps


module regFileTest;

	// Inputs
	reg [4:0] rs;
	reg [4:0] rt;
	reg [4:0] rd;
	reg writeSig;
	reg Clk;
	reg [31:0] writeData;

	// Outputs
	wire [31:0] sourceReg;
	wire [31:0] secondaryReg;

	// Instantiate the Unit Under Test (UUT)
	registerFile uut (
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.writeSig(writeSig), 
		.Clk(Clk), 
		.writeData(writeData), 
		.sourceReg(sourceReg), 
		.secondaryReg(secondaryReg)
	);

	initial begin
		// Initialize Inputs
		rs = 5;
		rt = 31;
		rd = 0;
		writeSig = 0;
		Clk = 0;
		writeData = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here


		rs = 27;
		rt = 0;
		rd = 8;
		writeSig = 1;
		writeData = 456;
		#100;
		rs = 8;
		rt = 7;
		rd = 0;
		writeSig = 1;
		writeData = 88888;
		#100;
		rs = 25;
		rt = 21;
		rd = 0;
		writeSig = 0;
		writeData = 0;
		#100;
	end
   always #100 Clk = ~Clk;
endmodule

