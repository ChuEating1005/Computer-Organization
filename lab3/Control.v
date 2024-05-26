module Control (
    input [6:0] opcode,
    input [2:0] funct3,
    output reg memRead,
    output reg memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg SelB,
    output reg regWrite
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    
    reg [6:0] ctrl;
    assign {memRead, memtoReg, ALUOp, memWrite, SelB, regWrite} = ctrl;

    always @(*) begin
        case(opcode)
            7'b0110011 : ctrl = 7'b0010001; // add, sub, and, or, slt (R-type)
            7'b0010011 : ctrl = 7'b0011011; // addi, andi, ori, slti (I-type)
            7'b0000011 : ctrl = 7'b1100011; // lw
            7'b0100011 : ctrl = 7'b0x00110; // sw
            default:     ctrl = 7'bxxxxxxxxx;
        endcase 
    end

endmodule

