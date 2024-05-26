module EXReg(
    input clk,
    input rst,
    input memRead_in,
    input memWrite_in,
	input memtoReg_in,
    input regWrite_in,
    input [1:0] ALUOp_in,
    input SelB_in,
    input rs1_in,
    input rs2_in,
    input [31:0] imm_in,
    input [31:0] inst_in,
    output memRead_out,
    output memWrite_out,
    output memtoReg_out,
    output regWrite_out,
    output [1:0] ALUOp_out,
    output SelB_out,
    output rs1_out,
    output rs2_out,
    output [31:0] imm_out,
    output [31:0] inst_out
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
            inst_out <= inst_out;
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
            inst_out <= inst_in;
        end
    end
endmodule
