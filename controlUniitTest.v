`timescale 1ns / 1ps

module controlUniitTest;

	// Inputs
	reg [5:0] opcode;

	// Outputs
	wire RegDST;
	wire ALUSrc;
	wire MemToReg;
	wire RegWrite;
	wire MemRead;
	wire MemWrite;
	wire branch;
	wire [1:0] AluOp;

	// Instantiate the Unit Under Test (UUT)
	controlUnit uut (
		.opcode(opcode), 
		.RegDST(RegDST), 
		.ALUSrc(ALUSrc), 
		.MemToReg(MemToReg), 
		.RegWrite(RegWrite), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.branch(branch), 
		.AluOp(AluOp)
	);

	initial begin
		// Initialize Inputs
				opcode = 6'b000000;


		#100;
		
				opcode = 6'b000001;


		#100;
				opcode = 6'b000100;


		#100;
				opcode = 6'b000101;


		#100;
				opcode = 6'b000110;


		#100;
				opcode = 6'b000111;


		#100;


	end
      
endmodule

