`timescale 1ns / 1ps
module ALU(
		input [31:00] inputA, inputB,
		input [03:00] AluControl,
		input [04:00] shamt,
		output reg [31:00] aluOut,
		output reg 	  zero
    );
		
	 // for shift logical	
	 reg [31:00] shiftZero = 0;
	 
	 // giving the inital amount of registers
	 initial begin 
			zero   = 0;
			aluOut = 0;
	 end 
	 
	 // alu doing its job
	 always @ (*) begin 
	 case (AluControl)
	 
			4'b0000    :	aluOut = inputA + inputB;											//add
			4'b0001	  :	aluOut = inputA - inputB;											//sub
			4'b0010    :	aluOut = ~inputA;														//not
			4'b0011	  :	aluOut = inputA << shamt;											//lsl
			4'b0100    :	aluOut = inputA >> shamt;											//lsr
			4'b0101	  :	aluOut = inputA & inputB;											//and
			4'b0110    :	aluOut = inputA | inputB;											//or
			4'b0111	  :	aluOut = (inputA < inputB) ? 1 : 0;								//slt
	 
	 endcase
	 // for beq 
	 if ( aluOut == 0 )
			zero = 1;
	 else zero = 0;
	 end 


endmodule
