`timescale 1ns / 1ps
module InstMemory(
		input [31:0] address,
		input CLk,
		output reg [127:0] instruction
    );
	 
	 reg [7:0] instructionMemory[1023:0];
	 
	 reg [2:0] counter;
	 
	 reg [1023:0] i;
	 
	 initial begin
			counter = 0;
			for(i = 0 ; i < 1024; i = i + 1) begin
			
				instructionMemory[i] = i[7:0];
				
			end
				instruction[7:0]      =    instructionMemory[0];
				instruction[15:8]     =    instructionMemory[1];
				instruction[23:16]    =    instructionMemory[2];
				instruction[31:24]    =    instructionMemory[3];
				
				instruction[39:32]    =    instructionMemory[4];
				instruction[47:40]    =    instructionMemory[5];
				instruction[55:48]    =    instructionMemory[6];
				instruction[63:56]    =    instructionMemory[7];
				
				instruction[71:64]    =    instructionMemory[8];
				instruction[79:72]    =    instructionMemory[9];
				instruction[87:80]    =    instructionMemory[10];
				instruction[95:88]    =    instructionMemory[11];
				
				instruction[103:96]   =    instructionMemory[12];
				instruction[111:104]  =    instructionMemory[13];
				instruction[119:112]  =    instructionMemory[14];
				instruction[127:120]  =    instructionMemory[15];

	 end
		

	 always @ (posedge CLk ) begin
			counter = counter + 1;
			if (counter == 1 && address == 0)
				counter = 0;
			if ( counter == 5 )
				counter = 0;
			$display("time : %0t address : %d  counter : %d" , $time , address , counter);
			if (counter == 0) begin 
			
				instruction[7:0]      =    instructionMemory[address];
				instruction[15:8]     =    instructionMemory[address + 1];
				instruction[23:16]    =    instructionMemory[address + 2];
				instruction[31:24]    =    instructionMemory[address + 3];
				
				instruction[39:32]    =    instructionMemory[address + 4];
				instruction[47:40]    =    instructionMemory[address + 5];
				instruction[55:48]    =    instructionMemory[address + 6];
				instruction[63:56]    =    instructionMemory[address + 7];
				
				instruction[71:64]    =    instructionMemory[address + 8];
				instruction[79:72]    =    instructionMemory[address + 9];
				instruction[87:80]    =    instructionMemory[address + 10];
				instruction[95:88]    =    instructionMemory[address + 11];
				
				instruction[103:96]   =    instructionMemory[address + 12];
				instruction[111:104]  =    instructionMemory[address + 13];
				instruction[119:112]  =    instructionMemory[address + 14];
				instruction[127:120]  =    instructionMemory[address + 15];
				
			end
	end
endmodule
