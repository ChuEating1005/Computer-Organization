module IDReg(
    input clk,
    input rst,
    input [31:0] inst_in,
    output reg [31:0] inst_out
);
    always @(posedge clk, negedge rst) begin
        if (~rst) inst_out <= inst_out;
        else inst_out <= inst_in;
    end
endmodule
