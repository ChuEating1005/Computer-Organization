module MEMReg(
    input clk,
    input rst,
    input memRead_in,
    input memWrite_in,
    input [1:0] memtoReg_in,
    input regWrite_in,
    input [31:0] ALUResult_in,
    input [31:0] rs2_in,
    input [4:0] writeReg_in,
    input [31:0] PC_in,
    output reg memRead_out,
    output reg memWrite_out,
    output reg [1:0] memtoReg_out,
    output reg regWrite_out,
    output reg [31:0] ALUResult_out,
    output reg [31:0] rs2_out,
    output reg [4:0] writeReg_out
    output reg [31:0] PC_out
);
    always @(posedge clk, negedge rst) begin
        if (~rst) begin
            memRead_out <= memRead_out;
            memWrite_out <= memWrite_out;
            memtoReg_out <= memtoReg_out;
            regWrite_out <= regWrite_out;
            ALUResult_out <= ALUResult_out;
            rs2_out <= rs2_out;
            writeReg_out <= writeReg_out;
            PC_out <= PC_out;
        end
        else begin
            memRead_out <= memRead_in;
            memWrite_out <= memWrite_in;
            memtoReg_out <= memtoReg_in;
            regWrite_out <= regWrite_in;
            ALUResult_out <= ALUResult_in;
            rs2_out <= rs2_in;
            writeReg_out <= writeReg_in;
            PC_out <= PC_in;
        end
    end
endmodule
