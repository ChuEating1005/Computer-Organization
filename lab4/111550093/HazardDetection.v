module HazardDetection(
    input memRead_EX,
    input [4:0] rs1_ID,
    input [4:0] rs2_ID,
    input [4:0] rs2_EX,
    output reg stall_ID,
    output reg stall_EX,
    output reg stall_PC
);
    always @(*) begin
        if (memRead_EX && (rs2_EX != 0) && ((rs2_EX == rs1_ID) || (rs2_EX == rs2_ID)) ) begin
            stall_ID = 1'b1;
            stall_EX = 1'b1;
            stall_PC = 1'b1;
        end
        else begin
            stall_ID = 1'b0;
            stall_EX = 1'b0;
            stall_PC = 1'b0;
        end
    end
endmodule
