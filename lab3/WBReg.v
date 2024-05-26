module WBReg(
    input clk,
    input rst,
    input memtoReg_in,
    input regWrite_in,
    input [31:0] ALUResult_in,
    input [31:0] readData_in,
    input [4:0] writeReg_in,
    output reg memtoReg_out,
    output reg regWrite_out,
    output reg [31:0] ALUResult_out,
    output reg [31:0] readData_out,
    output reg [4:0] writeReg_out
);
    always @(posedge clk, negedge rst) begin
        if (~rst) begin
            memtoReg_out <= memtoReg_out;
            regWrite_out <= regWrite_out;
            ALUResult_out <= ALUResult_out;
            readData_out <= readData_out;
            writeReg_out <= writeReg_out;
        end
        else begin
            memtoReg_out <= memtoReg_in;
            regWrite_out <= regWrite_in;
            ALUResult_out <= ALUResult_in;
            readData_out <= readData_in;
            writeReg_out <= writeReg_in;
        end
    end

endmodule
