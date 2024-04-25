module Control (
    input [6:0] opcode,
    output reg branch,
    output reg memRead,
    output reg memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    
    reg [7:0] ctrl;
    assign {branch, memRead, memtoReg, ALUOp, memWrite, ALUSrc, regWrite} = ctrl;

    always @(*) begin
        case(opcode)
            7'b0110011 : ctrl = 8'b00010001; // add, sub, and, or, slt (R-type)
            7'b0010011 : ctrl = 8'b00011011; // addi, andi, ori, slti (I-type)
            7'b0000011 : ctrl = 8'b01100011; // lw
            7'b0100011 : ctrl = 8'b00x00110; // sw
            7'b1100011 : ctrl = 8'b10x01000; // beq
            default:     ctrl = 8'bxxxxxxxx;
        endcase 
    end

endmodule

