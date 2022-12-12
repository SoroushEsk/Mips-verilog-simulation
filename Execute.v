`timescale 1ns / 1ps

module Execute(
			input  [31:00]	inputA, inputB, immediate, nextPC,  // we need pc for calculating branck target
			input  [04:00] shamt,
			input  [05:00] funct,
			input  [02:00] ALUop,
			input 			ALUSrc,
			
			output [31:00] result,
			output 			zero,
			output [31:00] addResult			
    );
	 
	 wire [31:00] ALUControl;
	
	 ALUcontrol ALUCntrl (
    .ALUop(ALUop), 
    .func(funct), 
    .ALUControl(ALUControl)
    );
	 
	 

	 wire [31:00] secondInput;
	 
	 Mux2NToN mux2To1 (
    .zeroSource(inputB), 
    .oneSource(immediate), 
    .select(ALUSrc), 
    .out(secondInput)
    );

	 ALU MainALU (
    .inputA(inputA), 
    .inputB(secondInput), 
    .AluControl(ALUControl), 
    .shamt(shamt), 
    .aluOut(result), 
    .zero(zero)
    );
	 
	 wire [31:00] shift2Left = immediate << 2;

	 Adder adder32  (
    .first(shift2Left), 
    .second(nextPC), 
    .sum(addResult)
    );

endmodule 
