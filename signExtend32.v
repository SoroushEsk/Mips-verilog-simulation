`timescale 1ns / 1ps

module signExtend32(
		input   [15:00]   immPartInst,
		output  [31:00]   signExt
    );

	
	//copy the 16th bit of immPartInst 16 times and concat it with all immPartInst
	assign signExt = {{16{immPartInst[15]}}, immPartInst};
	
endmodule
