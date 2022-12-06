`timescale 1ns / 1ps


module decodeTest;

	// Inputs
	reg [31:0] instruction;
	reg [31:0] writeToReg;
	reg Clk;
	reg writeSig;

	// Outputs
	wire [31:0] signExtend;
	wire [31:0] register1;
	wire [31:0] register2;
	wire [08:0] controlUnitSig;
	wire [4:0] rd;
	wire [4:0] rt;
	wire [5:0] funcBits;

	// Instantiate the Unit Under Test (UUT)
	decodeState uut (
		.instruction(instruction), 
		.writeToReg(writeToReg), 
		.Clk(Clk), 
		.writeSig(writeSig), 
		.signExtend(signExtend), 
		.register1(register1), 
		.register2(register2), 
		.controlUnitSig(controlUnitSig), 
		.rd(rd), 
		.rt(rt),  
		.funcBits(funcBits)
	);

	initial begin
		// Initialize Inputs
		instruction = 32'b00000011010101110000000000101100;
		writeToReg  = 0;
		Clk         = 0;
		writeSig    = 0;
		#200;
        
		instruction = 32'b00000011110101010000000000101111;
		writeToReg  = 0;
		writeSig    = 0;
		#200;
		 
		
		instruction = 32'b00000001110100000000000000100011;
		writeToReg  = 0;
		writeSig    = 0;
		#200;		


	end
	
	always #100 Clk = ~Clk;
      
endmodule

