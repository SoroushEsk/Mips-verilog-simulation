`timescale 1ns / 1ps

module forwading(
		input [31:00] data1, data2,
		input [04:00] nextRD, nextnextRD,
		input [04:00] rt, rs,
		output reg [31:00] outData,
		output reg first, second
    );
	 
	 initial begin
		first  =  0 ;
		second =  0 ;
		outData = 0 ;
	 
	 end
	always @ (*) begin 
		if( rs == nextRD || rs == nextnextRD)begin 
			first = 1;
			if (rs == nextRD) begin
				outData = data1;
			end else if ( rs == nextnextRD) begin 
				outData = data2;
			end
		end else first =  0;
		if ( rt == nextRD || rt == nextnextRD ) begin
			second = 1;
			if ( rt == nextRD ) begin 
				outData = data1;
			end else if ( rt == nextnextRD )  begin
				outData = data2;
			end
		end else second = 0;
	end

endmodule
