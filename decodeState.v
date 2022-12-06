`timescale 1ns / 1ps

module decodeState(
		input      [31:00]   instruction, writeToReg,
		input    			   Clk, writeSig,
		output     [31:00]   signExtend,
		output     [31:00]   register1,
		output     [31:00]   register2,
		output     [08:00]   controlUnitSig,  
		output     [04:00]   rd, rt,
		output     [05:00]   funcBits         // alu control unit need these
    );
	 
	 reg  [05:00]  opcode;
	 reg  [04:00]  rs, shmnt;
	 reg  [15:00]  immediate;
	 
	 
	
	 
	 signExtend32 signExtended32bit (
    .immPartInst(immediate), 
    .signExt(signExtend)
    );
	 
	// wire  [31:00] reg1_, reg2_;
	 
	 registerFile mipsRegFile (
    .rs(rs), 
    .rt(rt), 
    .rd(rd), 
    .writeSig(writeSig), 
    .Clk(Clk), 
    .writeData(writeToReg), 
    .sourceReg(register1), 
    .secondaryReg(register2)
    );

	 controlUnit cu (
    .opcode   (opcode), 
    .RegDST   (controlUnitSig[8]), 
    .ALUSrc   (controlUnitSig[7]), 
    .MemToReg (controlUnitSig[6]), 
    .RegWrite (controlUnitSig[5]), 
    .MemRead  (controlUnitSig[4]), 
    .MemWrite (controlUnitSig[3]), 
    .branch   (controlUnitSig[2]), 
    .AluOp    (controlUnitSig[1:0])
    );

	 // seperate instruction properties
	 always @ (posedge Clk) begin
		opcode 	   =  	instruction[31:26];
		funcBits   	= 		instruction[05:00];
		rs     	   =  	instruction[25:21];
		rt      	   = 	   instruction[20:16];
		rd       	=  	instruction[15:11];
		shmnt   	   = 	   instruction[10:06];
		
		immediate   =     instruction[15:00];

	 end


endmodule
