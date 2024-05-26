module EXReg(
    input clk,
    input rst,
    input memRead_in,
    input memWrite_in,
	input memtoReg_in,
    input regWrite_in,
    input [1:0] ALUOp_in,
    input SelB_in,
    input [31:0] rs1_in,
    input [31:0] rs2_in,
    input [31:0] imm_in,
    input funct7_in,
    input [2:0] funct3_in,
    input [4:0] writeReg_in,
    output reg memRead_out,
    output reg memWrite_out,
    output reg memtoReg_out,
    output reg regWrite_out,
    output reg [1:0] ALUOp_out,
    output reg SelB_out,
    output reg [31:0] rs1_out,
    output reg [31:0] rs2_out,
    output reg [31:0] imm_out,
    output reg funct7_out,
    output reg [2:0] funct3_out,
    output reg [4:0] writeReg_out
);
    always @(posedge clk, negedge rst) begin
        if (~rst) begin
            memRead_out <= memRead_out;
            memWrite_out <= memWrite_out;
            memtoReg_out <= memtoReg_out;
            regWrite_out <= regWrite_out;
            ALUOp_out <= ALUOp_out;
            SelB_out <= SelB_out;
            rs1_out <= rs1_out;
            rs2_out <= rs2_out;
            imm_out <= imm_out;
            funct7_out <= funct7_out;
            funct3_out <= funct3_out;
            writeReg_out <= writeReg_out;
        end
        else begin
            memRead_out <= memRead_in;
            memWrite_out <= memWrite_in;
            memtoReg_out <= memtoReg_in;
            regWrite_out <= regWrite_in;
            ALUOp_out <= ALUOp_in;
            SelB_out <= SelB_in;
            rs1_out <= rs1_in;
            rs2_out <= rs2_in;
            imm_out <= imm_in;
            funct7_out <= funct7_in;
            funct3_out <= funct3_in;
            writeReg_out <= writeReg_in;
        end
    end
endmodule
