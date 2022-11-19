`timescale 1ns / 1ps

module decodeState(
		input      [31:00]   instruction, writeToReg,
		input    			   Clk, writeSig,
		output     [31:00]   signExtend,
		output     [31:00]   register1,
		output     [31:00]   register2,
		output reg [11:00]   controlUnitSig,  // in case of adding control unit to the game
		output reg [04:00]   rd, rt,
		output reg [05:00]   funcBits         // alu control unit need these
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
