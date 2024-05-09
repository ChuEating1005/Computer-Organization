module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

wire [31:0] PC, PC_plus4, MuxPC_Out, MuxSelA_Out, MuxSelB_Out, ALU_Out, Ins, Imm, readData1, readData2, writeData, readData;
wire [3:0] ALUCtl;
wire [1:0] ALUOp, memtoReg;
wire PCSel, memRead, memWrite, SelA, SelB, regWrite, BrLt, BrEq;

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(MuxPC_Out),
    .pc_o(PC)
);

Adder m_Adder_1(
    .a(PC),
    .b(4),
    .sum(PC_plus4)
);

InstructionMemory m_InstMem(
    .readAddr(PC),
    .inst(Ins)
);

Control m_Control(
    .opcode(Ins[6:0]),
    .funct3(Ins[14:12]),
    .BrEq(BrEq),
    .BrLt(BrLt),
    .PCSel(PCSel), // 1 bit
    .memRead(memRead), // 1 bit
    .memtoReg(memtoReg), // 2 bits
    .ALUOp(ALUOp), // 2 bits
    .memWrite(memWrite), // 1 bit
    .SelA(SelA), // 1 bit
    .SelB(SelB), // 1 bit
    .regWrite(regWrite) // 1 bit
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite),
    .readReg1(Ins[19:15]),
    .readReg2(Ins[24:20]),
    .writeReg(Ins[11:7]),
    .writeData(writeData),
    .readData1(readData1),
    .readData2(readData2)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(Ins[31:0]),
    .imm(Imm)
);

BranchComp branch_Comp(
    .readData1(readData1),
    .readData2(readData2),
    .BrEq(BrEq),
    .BrLt(BrLt)
);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel),
    .s0(PC_plus4),
    .s1(ALU_Out),
    .out(MuxPC_Out)
);

Mux2to1 #(.size(32)) m_Mux_SelA(
    .sel(SelA),
    .s0(readData1),
    .s1(PC),
    .out(MuxSelA_Out)
);

Mux2to1 #(.size(32)) m_Mux_SelB(
    .sel(SelB),
    .s0(readData2),
    .s1(Imm),
    .out(MuxSelB_Out)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp),
    .funct7(Ins[30]),
    .funct3(Ins[14:12]),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(readData1),
    .B(MuxALU_Out),
    .ALUOut(ALU_Out),
    .zero(zero)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALU_Out),
    .writeData(readData2),
    .readData(readData)
);

Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg),
    .s0(ALU_Out),
    .s1(readData),
    .s2(PC_plus4),
    .out(writeData)
);

endmodule
