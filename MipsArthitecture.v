`timescale 1ns / 1ps
module MipsArthitecture(input Clk);


////////////////////////////////////////////////////////////////////////////////////start of state 1 If
	 	 FetchModule IF (
    .branchTarget(branchTarget), 
    .Clk(Clk), 
    .PCSrc(PCSrc), 
    .nextPC(nextPC), 
    .inst(inst), 
    .pcOut(pcOut), 
    .hit(hit)
    );
	 
////////////////////////////////////////	 register between two state 1 and 2 IF and ID
	 	 IFIDRegister IF_ID_Reg (
    .nextPC(nextPC), 
    .inst(inst), 
    .Clk(Clk), 
    .hit(hit), 
    .outInst(outInst), 
    .outNextPC(outNextPC)
    );
	 
////////////////////////////////////////////////////////////////////////////////////////start of state 2 ID	 
	 decodeState ID (
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
	 

	 

	 


endmodule
