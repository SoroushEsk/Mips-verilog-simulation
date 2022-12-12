`timescale 1ns / 1ps


module ExecuteTEst;

	// Inputs
	reg [31:0] inputA;
	reg [31:0] inputB;
	reg [31:0] immediate;
	reg [31:0] nextPC;
	reg [4:0] shamt;
	reg [5:0] funct;
	reg [2:0] ALUop;
	reg ALUSrc;

	// Outputs
	wire [31:0] result;
	wire zero;
	wire [31:0] addResult;

	// Instantiate the Unit Under Test (UUT)
	Execute uut (
		.inputA(inputA), 
		.inputB(inputB), 
		.immediate(immediate), 
		.nextPC(nextPC), 
		.shamt(shamt), 
		.funct(funct), 
		.ALUop(ALUop), 
		.ALUSrc(ALUSrc), 
		.result(result), 
		.zero(zero), 
		.addResult(addResult)
	);

	initial begin
		// Initialize Inputs
		inputA = 78;
		inputB = 78;
		immediate = 50;
		nextPC = 45;
		shamt = 0;
		funct = 6'b000001;
		ALUop = 0;
		ALUSrc = 0;

		#100;
        
	
	inputA = 45;
		inputB = 85;
		immediate = 86;
		nextPC = 12;
		shamt = 78;
		funct = 6'b000100;
		ALUop = 0;
		ALUSrc = 1;

		#100;
   
        


	end
      
endmodule

