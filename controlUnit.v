`timescale 1ns / 1ps
// getting input and outputs
module controlUnit( input [5:0] opcode,
						  output      RegDST,
						  output   	  ALUSrc,
						  output		  MemToReg,
						  output 	  RegWrite,
						  output      MemRead,
						  output 	  MemWrite,
						  output 	  branch,
						  output [1:0] AluOp
    );
	 // instruction set is so low we need just 3 bits
	 // naming is based on my calculations I was more comftable with this naming
	 // it's nobody's business
	 
	 wire o3 = opcode[2];
	 wire o2 = opcode[1];
	 wire o1 = opcode[0];
	 
	 // produce not of above bits
	 
	 wire no3, no2, no1;
	 
	 not (no3 , o3);
	 not (no2 , o2);
	 not (no1 , o1);
	 
	 // giving regDst it's value
	 
	 and ( RegDST , no3, no2 , no1);
	 
	 // now  ALUSrc
	 
	 wire andO1O3, andNo2O3, andNo2O1;
	 and(andO1O3 , o1 , o3);
	 and(andNo2O3, no2, o3);
	 and(andNo2O1, o1 , no2);
	 
	 or(ALUSrc,andO1O3, andNo2O3, andNo2O1);
	 
	 //going for memToReg
	 
	 and(MemToReg , o3 , no2, no1);
	 
	 // time for regWrite
	 wire andNo2No3 , andNo2No1, andO2O3O1;
	 and(andNo2No3 , no2 , no3);
	 and(andNo2No1 , no2 , no1);
	 and(andO2O3O1 , o2 , o3 , o1);
	 
	 or(RegWrite , andNo2No3 , andNo2No1 , andO2O3O1);
	 
	 // lets do memRead and memWrite and Branch
	 
	 and(MemRead , o3 , no2, no1);
	 and(MemWrite , o3 , o1 , no2);
	 and(branch , o2, o3 , no1);
	 
	 // Last but not least AluOP
	 
	 assign AluOp = { ALUSrc , o3};
	 
endmodule
