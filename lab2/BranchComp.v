module BranchComp (
    input [31:0] readData1,
    input [31:0] readData2,
    output reg BrEq,
    output reg BrLt
);
    // BranchComp computes BrEq and BrLt
    // BrEq is true if readData1 equals readData2
    // BrLt is true if readData1 is less than readData2

    assign BrEq = (readData1 == readData2) ? 1 : 0;
    assign BrLt = (readData1 < readData2) ? 1 : 0;

endmodule
