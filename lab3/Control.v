module Control (
    input [6:0] opcode,
    input [2:0] funct3,
    input BrEq,
    input BrLt,
    output reg PCSel,
    output reg memRead,
    output reg [1:0] memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg SelA,
    output reg SelB,
    output reg regWrite
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    
    reg [9:0] ctrl;
    assign {PCSel, memRead, memtoReg, ALUOp, memWrite, SelB, SelA, regWrite} = ctrl;

    always @(*) begin
        case(opcode)
            7'b0110011 : ctrl = 10'b00_00_10_0001; // add, sub, and, or, slt (R-type)
            7'b0010011 : ctrl = 10'b00_00_11_0101; // addi, andi, ori, slti (I-type)
            7'b0000011 : ctrl = 10'b01_01_00_0101; // lw
            7'b0100011 : ctrl = 10'b00_xx_00_1100; // sw
            7'b1101111: ctrl = 10'b10_11_00_0111; // jal
            7'b1100111: ctrl = 10'b10_11_00_0101; // jalr
            7'b1100011 : case(funct3)
                3'b000 : ctrl = (BrEq == 1) ? 10'b10_xx_00_0110 : 10'b00_xx_00_0110; // beq
                3'b001 : ctrl = (BrEq == 0) ? 10'b10_xx_00_0110 : 10'b00_xx_00_0110; // bne
                3'b100 : ctrl = (BrLt == 1) ? 10'b10_xx_00_0110 : 10'b00_xx_00_0110; // blt
                3'b101 : ctrl = (BrLt == 0) ? 10'b10_xx_00_0110 : 10'b00_xx_00_0110; // bge
                default: ctrl = 10'bxxxxxxxxxx;
            endcase
            default:     ctrl = 10'bxxxxxxxxxx;
        endcase 
    end

endmodule

