`timescale 1ns / 1ps

module ID_EX_Reg_Test;

	// Inputs
	reg [31:0] regInputA;
	reg [31:0] regInputB;
	reg [31:0] signExt;
	reg [31:0] nextPC;
	reg [8:0] controlSig;
	reg Clk;
	reg hit;
	reg [4:0] rd;
	reg [4:0] rt;
	reg [5:0] funct;

	// Outputs
	wire [31:0] inputAOut;
	wire [31:0] inputBOut;
	wire [31:0] signExtOut;
	wire [31:0] nextPCOut;
	wire [8:0] controlSigOut;
	wire [4:0] rdOut;
	wire [4:0] rtOut;
	wire [5:0] functOut;

	// Instantiate the Unit Under Test (UUT)
	ID_EX_Register uut (
		.regInputA(regInputA), 
		.regInputB(regInputB), 
		.signExt(signExt), 
		.nextPC(nextPC), 
		.controlSig(controlSig), 
		.Clk(Clk), 
		.hit(hit), 
		.rd(rd), 
		.rt(rt), 
		.funct(funct), 
		.inputAOut(inputAOut), 
		.inputBOut(inputBOut), 
		.signExtOut(signExtOut), 
		.nextPCOut(nextPCOut), 
		.controlSigOut(controlSigOut), 
		.rdOut(rdOut), 
		.rtOut(rtOut), 
		.functOut(functOut)
	);

	initial begin
		// Initialize Inputs
		regInputA = 0;
		regInputB = 0;
		signExt = 0;
		nextPC = 0;
		controlSig = 0;
		Clk = 0;
		hit = 0;
		rd = 0;
		rt = 0;
		funct = 0;


		#100;
        
		regInputA = 7;
		regInputB = 56;
		signExt = 4555;
		nextPC = 798;
		controlSig = 45;
		Clk = 1;
		hit = 1;
		rd = 02;
		rt = 015;
		funct = 32;


	end
   
	always begin 
	#10
	Clk = ~Clk;
	end
endmodule

