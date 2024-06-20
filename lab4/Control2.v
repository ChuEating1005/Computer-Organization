module Control2(
    input [6:0] opcode,
    input [2:0] funct3,
    input BrEq,
    input BrLt,
    output reg PCsel,
);
    always(*) begin
        case(opcode)
            7'b1101111: PCsel = 1; // jal
            7'b1100111: PCsel = 1; // jalr
            7'b1100011 : case(funct3)
                3'b000 : PCsel = (BrEq == 1) ? 1'b1 : 1'b0; // beq
                3'b001 : PCsel = (BrEq == 0) ? 1'b1 : 1'b0; // bne
                3'b100 : PCsel = (BrLt == 1) ? 1'b1 : 1'b0; // blt
                3'b101 : PCsel = (BrLt == 0) ? 1'b1 : 1'b0; // bge
            endcase
            default: PCsel = 1'b0;
        endcase
    end
endmodule