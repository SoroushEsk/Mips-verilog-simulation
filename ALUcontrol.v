`timescale 1ns / 1ps
module ALUcontrol(
		input  [1:0] ALUop,
		input  [5:0] func,
		output reg [3:0] ALUControl
		
    );
	 
	// I don't have enough time for gate level simulate
	// Going with always and if statement
	 always @ (*) begin
		
		if (ALUop == 3'b00)  begin				  // Rtype
		
			case ( func ) 
				6'b000000 : ALUControl = 4'b0000;  // Add
				6'b000001 : ALUControl = 4'b0001;  // Sub
				6'b000010 : ALUControl = 4'b0101;  // And
				6'b000011 : ALUControl = 4'b0110;  // Or
				6'b000100 : ALUControl = 4'b0111;  // Slt
				6'b000101 : ALUControl = 4'b0011;  // Lsl
				6'b000110 : ALUControl = 4'b0100;  // Lsr
				6'b000111 : ALUControl = 4'b0001;  // Not	
			endcase
			
		end else if ( ALUop == 3'b01)begin		  //beq
		
				ALUControl = 4'b0001;				  // Sub
				
		end else if ( ALUop == 3'b10 ) begin	  // slti
		
				ALUControl = 4'b0111; 				  // Slt
				
		end else if ( ALUop == 3'b11 ) begin	  // addi , lw , sw
		
				ALUControl = 4'b0000; 				  // Add
		end 
		
	 end
endmodule
