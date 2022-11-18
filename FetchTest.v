`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:38:32 11/13/2022
// Design Name:   FetchModule
// Module Name:   G:/University/term5/Az memary/ComputerArthitectureLab/FetchTest.v
// Project Name:  ComputerArthitectureLab
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FetchModule
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FetchTest;

	// Inputs
	reg [31:0] branchTarget;
	reg Clk;
	reg PCSrc;
	reg [31:0] nextPC;

	// Outputs
	wire [31:0] inst;
	wire [31:0] pcOut;
	wire hit;
	// Instantiate the Unit Under Test (UUT)
	FetchModule uut (
		.branchTarget(branchTarget), 
		.Clk(Clk), 
		.PCSrc(PCSrc), 
		.nextPC(nextPC), 
		.inst(inst), 
		.pcOut(pcOut), 
		.hit(hit)
	);

	initial begin
		// Initialize Inputs
		branchTarget = 0;
		Clk = 0;
		PCSrc = 0;
		nextPC = -4;

		// Wait 100 ns for global reset to finish
		#10;
        //
		// Add stimulus here

 
	end
    	always begin 
		#10;
		Clk <= ~Clk; 
	end
	always @ (posedge Clk)
		nextPC <= pcOut;
endmodule


