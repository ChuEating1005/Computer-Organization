module IDReg(
    input clk,
    input rst,
    input stall,
    input flush,
    input [31:0] PC_in,
    input [31:0] inst_in,
    output reg [31:0] PC_out,
    output reg [31:0] inst_out
);
    always @(posedge clk, negedge rst) begin
        if (flush) begin
            inst_out <= 32'b00000000000000000000000000110011;
            PC_out <= {32{1'bx}};
        end
        else if (~rst || stall) begin
            inst_out <= inst_out;
            PC_out <= PC_out;
        end
        else begin
            inst_out <= inst_in;
            PC_out <= PC_in;
        end
    end
endmodule
