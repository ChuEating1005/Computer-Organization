module Forwarding(
    input regWrite_WB, // 1 if write to register file
    input regWrite_MEM,
    input [4:0] rd_MEM, // writeReg_MEM
    input [4:0] rd_WB, // writeReg_WB
    input [4:0] rs1_EX,
    input [4:0] rs2_EX,
    output reg [1:0] ForwardA,
    output reg [1:0] ForwardB
);
    always @(*) begin
        ForwardA = 2'b00;
        ForwardB = 2'b00;
        // EX Hazard
        if (regWrite_MEM && (rd_MEM != 0) && (rd_MEM == rs1_EX)) begin
            ForwardA = 2'b10;
        end
        if (regWrite_MEM && (rd_MEM != 0) && (rd_MEM == rs2_EX)) begin
            ForwardB = 2'b10;
        end
        // MEM Hazard
        if (regWrite_WB && (rd_WB != 0) && (ForwardA != 2'b10) && (rd_WB == rs1_EX)) begin
            ForwardA = 2'b01;
        end
        if (regWrite_WB && (rd_WB != 0) && (ForwardB != 2'b10) && (rd_WB == rs2_EX)) begin
            ForwardB = 2'b01;
        end     
    end
endmodule
