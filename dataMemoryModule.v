`timescale 1ns / 1ps

module dataMemoryModule(
		input [31:0] address,inputData,
		input CLk, writeMem,
		output reg [127:0] data
    );

	
	 reg [7:0] dataMemory[0:1023];
	 reg [2:0] counter;
	 
	 reg [1023:0] i;
	 initial begin
			counter = -1;
			for ( i = 0 ; i < 1023 ; i = i+1) begin 
				dataMemory[i]  =    i[7:0];
			
			end 
				data[7:0]      =    dataMemory[0];
				data[15:8]     =    dataMemory[1];
				data[23:16]    =    dataMemory[2];
				data[31:24]    =    dataMemory[3];
				
				data[39:32]    =    dataMemory[4];
				data[47:40]    =    dataMemory[5];
				data[55:48]    =    dataMemory[6];
				data[63:56]    =    dataMemory[7];
				
				data[71:64]    =    dataMemory[8];
				data[79:72]    =    dataMemory[9];
				data[87:80]    =    dataMemory[10];
				data[95:88]    =    dataMemory[11];
				
				data[103:96]   =    dataMemory[12];
				data[111:104]  =    dataMemory[13];
				data[119:112]  =    dataMemory[14];
				data[127:120]  =    dataMemory[15];
	 end
		

	 always @ (negedge CLk ) begin
			if(writeMem) begin 
				dataMemory[address]        =    inputData[7:0] ; 
				dataMemory[address + 1]    =    inputData[15:8] ;
				dataMemory[address + 2]    =    inputData[23:16];
				dataMemory[address + 3]    =    inputData[31:24];		
			end
				counter = counter + 1;
			if ( counter == 4 )
				counter = 0;
			$display("time : %0t address : %d  counter : %d" , $time , address , counter);
			if (counter == 0) begin 
			
				data[7:0]      =    dataMemory[address];
				data[15:8]     =    dataMemory[address + 1];
				data[23:16]    =    dataMemory[address + 2];
				data[31:24]    =    dataMemory[address + 3];
				
				data[39:32]    =    dataMemory[address + 4];
				data[47:40]    =    dataMemory[address + 5];
				data[55:48]    =    dataMemory[address + 6];
				data[63:56]    =    dataMemory[address + 7];
				
				data[71:64]    =    dataMemory[address + 8];
				data[79:72]    =    dataMemory[address + 9];
				data[87:80]    =    dataMemory[address + 10];
				data[95:88]    =    dataMemory[address + 11];
				
				data[103:96]   =    dataMemory[address + 12];
				data[111:104]  =    dataMemory[address + 13];
				data[119:112]  =    dataMemory[address + 14];
				data[127:120]  =    dataMemory[address + 15];
				
			end
	end
endmodule
