`timescale 1ns / 1ps
module MipsArthitecture(input Clk,
								
								output [31:00] instruction
								);

	wire [31:00] inst, pcPlus;
   wire  hit;
	wire  hit2, hit1;

	

	wire [31:00] IF_IDInst, IF_IDPC ;
	wire [31:00] register1, register2, signExtend;
	wire [04:00] rd, rt, shmnt;
	wire [05:00] opcode, funcBits;
	wire [08:00] controlSig;
	
	assign instruction = IF_IDInst;
	
	wire [31:00] branchTarget;	
	wire [31:00] ID_EXEReg1, ID_EXEReg2, ID_EXESignExt, ID_EXEpcPlus;
	wire [08:00] ID_EXEControlSig;
	wire [04:00] ID_EXERd, ID_EXERt, ID_EXEShmnt;
	wire [05:00] ID_EXEFuncBits;
	wire zero;
	wire [31:00] ALUResult;
	
	wire [04:00] finalRd;
	wire PCSrc;

	wire [31:00] EXE_MEMResult, EXE_MEMData2;
	wire [08:00] EXE_MEMControlSig;
	wire [04:00] EXE_MEMRd;
	wire [31:00] memOut;

	wire [08:00] MEM_WBControlSig;
	wire [31:00] MEM_WBMemoryOut, MEM_WBALUResult;
	wire [04:00] MEM_WBRd;
	wire [31:00] writeDataToReg;
	
////////////////////////////////////////////////////////////////////////////////////start of state 1 If

	 
	 FetchModule IF (
		 .branchTarget(branchTarget), 
		 .Clk(Clk), 
		 .PCSrc(PCSrc), 
		 .inst(inst), 
		 .pcOut(pcPlus), 
		 .hit(hit)
    );
	 
////////////////////////////////////////	 register between two state 1 and 2 IF and ID
	 IFIDRegister IF_ID_Reg (
		 .nextPC(pcPlus), 
		 .inst(inst), 
		 .Clk(Clk), 
		 .hit(hit ), 
		 .outInst(IF_IDInst), 
		 .outNextPC(IF_IDPC)
    );
	 
/////////////////////////////////////////////////////////////////////////////////////////start of state 2 ID	 

	
	
	 decodeState ID (
		 .instruction(IF_IDInst), 
		 .writeToReg(writeDataToReg), 
		 .Clk(Clk), 
		 .writeSig(MEM_WBControlSig[5]), 
		 .finRD(MEM_WBRd),
		 .signExtend(signExtend), 
		 .register1(register1), 
		 .register2(register2), 
		 .controlUnitSig(controlSig), 
		 .rd(rd), 
		 .rt(rt), 
		 .shmnt(shmnt),
		 .funcBits(funcBits),
		 .opcode(opcode)
    );
////////////////////////////////////////////////////////////////////////////////////////ID_EXE stage	 
	 ID_EX_Register ID_EXERegister (
		 .regInputA(register1), 
		 .regInputB(register2), 
		 .signExt(signExtend), 
		 .nextPC(IF_IDPC), 
		 .controlSig(controlSig), 
		 .Clk(Clk), 
		 .hit(hit), 
		 .rd(rd), 
		 .rt(rt), 
		 .shmnt(shmnt),
		 .funct(funcBits), 
		 .inputAOut(ID_EXEReg1), 
		 .inputBOut(ID_EXEReg2), 
		 .signExtOut(ID_EXESignExt), 
		 .nextPCOut(ID_EXEpcPlus), 
		 .controlSigOut(ID_EXEControlSig), 
		 .rdOut(ID_EXERd), 
		 .rtOut(ID_EXERt), 
		 .shmntOut(ID_EXEShmnt),
		 .functOut(ID_EXEFuncBits)
    );

///////////////////////////////////////////////////////////////////////////////////////EXE Stage

	
	Execute EXESection (
		 .inputA(ID_EXEReg1), 
		 .inputB(ID_EXEReg2), 
		 .immediate(ID_EXESignExt), 
		 .nextPC(ID_EXEpcPlus), 
		 .shamt(ID_EXEShmnt), 
		 .funct(ID_EXEFuncBits), 
		 .ALUop(ID_EXEControlSig[1:0]), 
		 .ALUSrc(ID_EXEControlSig[7]), 
		 .result(ALUResult), 
		 .zero(zero), 
		 .addResult(branchTarget)
    );
	 
	assign PCSrc = (ID_EXEControlSig[2]==1 && zero ==1) ? 1 : 0;
	assign finalRd = ID_EXEControlSig[8] ? ID_EXERd : ID_EXERt;
/////////////////////////////////////////////////////////////////////////////////////////EXE_MEM register
	 EXE_MEMRegister EXE_MEMRegis (
		 .clk(Clk), 
		 .hit(hit), 
		 .rd(finalRd), 
		 .ALUReasult(ALUResult), 
		 .readData2(ID_EXEReg2), 
		 .controlSig(ID_EXEControlSig), 
		 .controlSigOut(EXE_MEMControlSig), 
		 .rdOut(EXE_MEMRd), 
		 .ALUReasultOut(EXE_MEMResult), 
		 .readData2Out(EXE_MEMData2)
    );
/////////////////////////////////////////////////////////////////////////////////////////Mem stage
	

	DataMemory DMSection (
		 .address(EXE_MEMResult), 
		 .data(EXE_MEMData2), 
		 .clk(Clk), 
		 .dataRead(EXE_MEMControlSig[4]), 
		 .dataWrite(EXE_MEMControlSig[3]), 
		 .outData(memOut), 
		 .hit(hit1)
    );
///////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\MEM-WB
	Mem_Wb_register MEM_WBRegister (
		 .clk(Clk), 
		 .hit(hit ), 
		 .controlSig(EXE_MEMControlSig), 
		 .readReg2(memOut), 
		 .ALUReasult(EXE_MEMResult), 
		 .rd(EXE_MEMRd), 
		 .controlSigOut(MEM_WBControlSig), 
		 .readReg2Out(MEM_WBMemoryOut), 
		 .ALUReasultOut( MEM_WBALUResult), 
		 .rdOut(MEM_WBRd)
    );
////////////////////////////////////////////////////////////////////////////////////////////write back
	

	writeBack memToReg64_32_MuX (
		 .memoryOut(MEM_WBMemoryOut), 
		 .readReg2(MEM_WBALUResult), 
		 .memToReg(MEM_WBControlSig[6]), 
		 .registerWrite(writeDataToReg)
    );

	always @ ( posedge Clk ) begin
		
		$display("time : %t" , $time);
		$display("alu result : %x" , ALUResult);
		$display("write reg :%x" , writeDataToReg);
		$display("inst : %x  if_id : %x     sign : %x" , inst, IF_IDInst,ID_EXESignExt);
		$display("pc : %x" , pcPlus);
		$display("branch : %x", branchTarget);
		$display("pcsrc : %x" , PCSrc);
		$display("hit : %x" , hit);
		$display("regWrite = %x", MEM_WBControlSig[3]);
		$display("%x    %x" ,MEM_WBRd,EXE_MEMResult);
		$display("%x      %x" ,writeDataToReg,MEM_WBALUResult);		
		$display("%x" ,MEM_WBControlSig[6]);	
		$display("================================================================");
	
	
	end
/*
	always @ ( hit1 , hit2 )begin
		if ( hit1 == 0 || hit2 == 0)
			hit = 0;
		else hit = 1;
	end */
	
endmodule
