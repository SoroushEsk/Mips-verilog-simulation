`timescale 1ns / 1ps
module ID_EX_Register(
			input 	[31:00] regInputA, regInputB, signExt, nextPC,
			input		[08:00] controlSig,
			input				  Clk, hit,
			input 	[04:00] rd , rt,rs,shmnt,
			input 	[05:00] funct,
			
			output reg	[31:00] inputAOut, inputBOut, signExtOut, nextPCOut,
			output reg	[08:00] controlSigOut,
			output reg  [04:00] rdOut, rtOut,rsOut, shmntOut,
			output reg  [05:00] functOut
    );
	 
	 initial begin
				rsOut  			=  0  ;
				inputAOut      =  0	;
				inputBOut  	   =  0	;
				signExtOut     =  0	;
				nextPCOut   	=  0	;
				controlSigOut  =  0	;
				rdOut				=  0	;
				rtOut 			=  0	;
				functOut			=  0	;
				shmntOut 		=  0	;
	 end
	 always @ (negedge Clk) begin 
	 //in case hit == 0 then the output should not change at all
			if ( hit != 0 ) begin 
				rsOut				=  rs          ;
				inputAOut      =  regInputA   ;
				inputBOut  	   =  regInputB	;
				signExtOut     =  signExt		;
				nextPCOut   	=  nextPC		;
				controlSigOut  =  controlSig	;
				rdOut				=  rd				;
				rtOut 			=  rt				;
				functOut			=  funct			;
				shmntOut			=  shmnt			;
				
			end
	 end
					


endmodule
