`timescale 1ns / 1ps

module registerFile(
		input      [04:00] rs, rt, rd,
		input              writeSig,
		input              Clk,
		input      [31:00] writeData,
		output     [31:00] sourceReg,
		output     [31:00] secondaryReg
    );
		
	reg [31:00] registers [31:00];
	
	// giving registers initial amount right now instead of zero giving them their number
	integer index ;
	initial begin 
		for (index = 0 ; index < 32 ; index = index + 1)  registers[index] = 0;
	end
	
	// not depend on clk 
	assign sourceReg    =  registers[rs];
	assign secondaryReg =  registers[rt];
	
	// just setting register need pos edge of clk
	always @ (negedge Clk) begin 
		
		if(writeSig) begin
			
			if( rd != 5'b00000 ) begin 
				
				registers[rd]	=  writeData;
				 
			end
		end		
		$display("time: %t" , $time);
		$display("Register%d : %x",00 , registers[00]);
		$display("Register%d : %x",01 , registers[01]);
		$display("Register%d : %x",02 , registers[02]);
		$display("Register%d : %x",03 , registers[03]);
		$display("Register%d : %x",04 , registers[04]);
		$display("Register%d : %x",05 , registers[05]);
		$display("Register%d : %x",06 , registers[06]);
		$display("Register%d : %x",07 , registers[07]);
	end
	
	
endmodule
