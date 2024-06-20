module EXReg(
    input clk,
    input rst,
    input flush,
    input memRead_in,
    input memWrite_in,
	input [1:0] memtoReg_in,
    input regWrite_in,
    input [1:0] ALUOp_in,
    input SelA_in,
    input SelB_in,
    input [31:0] rs1_in,
    input [31:0] rs2_in,
    input [31:0] imm_in,
    input [6:0] opcode_in,
    input funct7_in,
    input [2:0] funct3_in,
    input [4:0] writeReg_in,
    input [31:0] PC_in,
    output reg memRead_out,
    output reg memWrite_out,
    output reg [1:0] memtoReg_out,
    output reg regWrite_out,
    output reg [1:0] ALUOp_out,
    output reg SelA_out,
    output reg SelB_out,
    output reg [31:0] rs1_out,
    output reg [31:0] rs2_out,
    output reg [31:0] imm_out,
    output reg [6:0] opcode_out,
    output reg funct7_out,
    output reg [2:0] funct3_out,
    output reg [4:0] writeReg_out
    output reg [31:0] PC_out
);
    always @(posedge clk, negedge rst) begin
        if (flush) begin
            memRead_out = 1'b0;
            memWrite_out = 1'b0;
            memtoReg_out = 1'b0;
            regWrite_out = 1'b0;
            ALUOp_out = 2'b00;
            SelA_out = 1'b0;
            SelB_out = 1'b0;
            rs1_out = 32'b0;
            rs2_out = 32'b0;
            imm_out = 32'b0;
            opcode_out = 7'b0110011;
            funct7_out = 7'b0;
            funct3_out = 3'b0;
            writeReg_out = 5'b0;
            PC_out = 32'b0;
        end
        else if (~rst) begin
            memRead_out <= memRead_out;
            memWrite_out <= memWrite_out;
            memtoReg_out <= memtoReg_out;
            regWrite_out <= regWrite_out;
            ALUOp_out <= ALUOp_out;
            SelA_out <= SelA_out;
            SelB_out <= SelB_out;
            rs1_out <= rs1_out;
            rs2_out <= rs2_out;
            imm_out <= imm_out;
            opcode_out <= opcode_out;
            funct7_out <= funct7_out;
            funct3_out <= funct3_out;
            writeReg_out <= writeReg_out;
            PC_out <= PC_out;
        end
        else begin
            memRead_out <= memRead_in;
            memWrite_out <= memWrite_in;
            memtoReg_out <= memtoReg_in;
            regWrite_out <= regWrite_in;
            ALUOp_out <= ALUOp_in;
            SelA_out <= SelA_in;
            SelB_out <= SelB_in;
            rs1_out <= rs1_in;
            rs2_out <= rs2_in;
            imm_out <= imm_in;
            opcode_out <= opcode_in;
            funct7_out <= funct7_in;
            funct3_out <= funct3_in;
            writeReg_out <= writeReg_in;
            PC_out <= PC_in;
        end
    end
endmodule
