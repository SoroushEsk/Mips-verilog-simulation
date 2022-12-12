`timescale 1ns / 1ps
module ALUTest;

	// Inputs
	reg [31:0] inputA;
	reg [31:0] inputB;
	reg [3:0] AluControl;
	reg [4:0] shamt;

	// Outputs
	wire [31:0] aluOut;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.inputA(inputA), 
		.inputB(inputB), 
		.AluControl(AluControl), 
		.shamt(shamt), 
		.aluOut(aluOut), 
		.zero(zero)
	);

	initial begin
		inputA = 789;
		inputB = 5;
		AluControl = 0;
		shamt = 0;

		
		#100;
		
		inputA = 777;
		inputB = 77;
		AluControl = 4'b0001;
		shamt = 0;

		
		#100;
		
		inputA = 0;
		inputB = 0;
		AluControl = 4'b0010;
		shamt = 0;

		
		#100;
		
		inputA = 90;
		inputB = 0;
		AluControl = 4'b0011;
		shamt = 3;

		
		#100;
		
		inputA = 8888;
		inputB = 0;
		AluControl = 4'b0100;
		shamt = 5;

		
		#100;
		
		inputA = -1;
		inputB = 8;
		AluControl = 4'b0101;
		shamt = 0;

		
		#100;
		
		inputA = 0;
		inputB = 85;
		AluControl = 4'b0110;
		shamt = 0;

		
		#100;
		
		inputA = 95;
		inputB = 45;
		AluControl = 4'b0111;
		shamt = 0;

		
		#100;
		
		inputA = 85;
		inputB = 185;
		AluControl = 4'b0111;
		shamt = 0;

		
		#100;
        
		

	end
      
endmodule

