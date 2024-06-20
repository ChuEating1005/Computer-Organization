module Control (
    input [6:0] opcode,
    input stall,
    output reg memRead, // MEM
    output reg [1:0] memtoReg, // WB
    output reg [1:0] ALUOp, // EX
    output reg memWrite, // MEM
    output reg SelA, // EX
    output reg SelB, // EX
    output reg regWrite // WB
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    
    reg [8:0] ctrl;
    assign {memRead, memtoReg, ALUOp, memWrite, SelB, SelA, regWrite} = ctrl;
    always @(*) begin
        if (stall): ctrl = 9'b000000000;
        else begin
            case(opcode)
                7'b0110011: ctrl = 9'b0_01_10_0001; // add, sub, and, or, slt (R-type)
                7'b0010011: ctrl = 9'b0_01_11_0101; // addi, andi, ori, slti (I-type)
                7'b0000011: ctrl = 9'b1_00_00_0101; // lw
                7'b0100011: ctrl = 9'b0_xx_00_1100; // sw
                7'b1101111: ctrl = 9'b0_10_00_0111; // jal
                7'b1100111: ctrl = 9'b0_10_00_0101; // jalr
                7'b1100011: ctrl = 9'b0_xx_00_0110 // beq, bne, blt, bge
                default:     ctrl = 9'bxxxxxxxxxx;
            endcase 
        end
    end

endmodule

