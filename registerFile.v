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
		for (index = 0 ; index < 32 ; index = index + 1)  registers[index] = index;
	end
	
	// not depend on clk 
	assign sourceReg    =  registers[rs];
	assign secondaryReg =  registers[rt];
	
	// just setting register need pos edge of clk
	always @ (posedge Clk) begin 
		
		if(writeSig) begin
			
			if( rd != 5'b00000 ) begin 
				
				registers[rd]	=  writeData;
				 
			end
		end
	end
	

endmodule
