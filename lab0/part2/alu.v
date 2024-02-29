/* verilator lint_off MODDUP */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSEDSIGNAL */
module alu(
    input signed [3:0] a,
    input signed [3:0] b,
    input [2:0] s,
    output reg signed [3:0] y
); 
    
    // alu has two input operand a and b.
    // It executes different operation over input a and b based on input s
    // then generate result to output y
    
    // TODO: implement your 4bits ALU design here and using your own fullAdder module in this module
    // For testbench verifying, do not modify input and output pin
    // Temp variables for full adder
    wire [3:0] sumres;
    wire [3:0] subres;
    
    FourBitAdder ADD(a, b, 0, sumres);
    FourBitAdder SUB(a, b, 1, subres);

    // Implement operations based on s
    always @(*) begin
        case(s)
            3'b000: y = sumres;
            3'b001: y = subres;
            3'b010: y = ~a;
            3'b011: y = a & b; 
            3'b100: y = a | b; 
            3'b101: y = a ^ b;
            3'b110: y = (a > b) ? 4'b0001 : 4'b0000;
            3'b111: y = (a == b) ? 4'b0001 : 4'b0000;
            default: y = 4'bxxxx;
        endcase
    end
endmodule;

module FourBitAdder(
    input signed [3:0] a,
    input signed [3:0] b,
    input cin,
    output reg signed [3:0] sum);

    wire [3:0] carry;
    wire [3:0] b_mod;

    assign b_mod = (cin == 1) ? ~b : b;
    
    fullAdder fa0(cin, a[0], b_mod[0], sum[0], carry[0]);
    fullAdder fa1(carry[0], a[1], b_mod[1], sum[1], carry[1]);
    fullAdder fa2(carry[1], a[2], b_mod[2], sum[2], carry[2]);
    fullAdder fa3(carry[2], a[3], b_mod[3], sum[3], carry[3]);
endmodule;

module fullAdder(input cin, input a, input b, output s, output cout);
    assign s = a ^ b ^ cin;
    assign cout = (a & b) | (a & cin) | (b & cin);
endmodule;
