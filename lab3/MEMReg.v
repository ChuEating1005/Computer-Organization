module MEMReg(
    input clk,
    input rst,
    input memRead_in,
    input memWrite_in,
    input memtoReg_in,
    input regWrite_in,
    input [31:0] ALUResult_in,
    input [31:0] rs2_in,
    input [31:0] inst_in,
    output memRead_out,
    output memWrite_out,
    output memtoReg_out,
    output regWrite_out,
    output [31:0] ALUResult_out,
    output [31:0] rs2_out,
    output [31:0] inst_out
);
    always @(posedge clk, negedge rst) begin
        if (~rst) begin
            memRead_out <= memRead_out;
            memWrite_out <= memWrite_out;
            memtoReg_out <= memtoReg_out;
            regWrite_out <= regWrite_out;
            ALUResult_out <= ALUResult_out;
            rs2_out <= rs2_out;
            inst_out <= inst_out;
        end
        else begin
            memRead_out <= memRead_in;
            memWrite_out <= memWrite_in;
            memtoReg_out <= memtoReg_in;
            regWrite_out <= regWrite_in;
            ALUResult_out <= ALUResult_in;
            rs2_out <= rs2_in;
            inst_out <= inst_in;
        end
    end
endmodule
