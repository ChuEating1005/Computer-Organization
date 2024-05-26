module WBReg(
    input clk,
    input rst,
    input memtoReg_in,
    input regWrite_in,
    input [31:0] ALUResult_in,
    input [31:0] readData_in,
    input [31:0] inst_in,
    output memtoReg_out,
    output regWrite_out,
    output [31:0] ALUResult_out,
    output [31:0] readData_out,
    output [31:0] inst_out
);
    always @(posedge clk, negedge rst) begin
        if (~rst) begin
            memtoReg_out <= memtoReg_out;
            regWrite_out <= regWrite_out;
            ALUResult_out <= ALUResult_out;
            readData_out <= readData_out;
            inst_out <= inst_out;
        end
        else begin
            memtoReg_out <= memtoReg_in;
            regWrite_out <= regWrite_in;
            ALUResult_out <= ALUResult_in;
            readData_out <= readData_in;
            inst_out <= inst_in;
        end
    end

endmodule