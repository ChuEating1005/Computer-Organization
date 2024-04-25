module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] t0,
    output signed [31:0] t1,
    output signed [31:0] t2,
    output signed [31:0] t3,
    output signed [31:0] t4,
    output signed [31:0] t5,
    output signed [31:0] t6,
    output signed [31:0] s0,
    output signed [31:0] s1,
    output signed [31:0] s2,
    output signed [31:0] sp,
    output signed [31:0] a0,
    output signed [31:0] a1,
    output signed [31:0] ra
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

wire [31:0] PC, PC_plus4, PC_branch, MuxPC_Out, MuxALU_Out, ALU_Out, Ins, Imm, readData1, readData2, writeData, shiftOut, readData;
wire [3:0] ALUCtl;
wire [1:0] ALUOp;
wire branch, memRead, memWrite, memtoReg, ALUSrc, regWrite, zero, andOut;

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
    .branch(branch),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite)
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
assign ra = m_Register.regs[1];
assign t0 = m_Register.regs[5];
assign t1 = m_Register.regs[6];
assign t2 = m_Register.regs[7];
assign s0 = m_Register.regs[8];
assign s1 = m_Register.regs[9];
assign a0 = m_Register.regs[10];
assign a1 = m_Register.regs[11];
assign s2 = m_Register.regs[18];
assign t3 = m_Register.regs[28];
assign t4 = m_Register.regs[29];
assign t5 = m_Register.regs[30];
assign t6 = m_Register.regs[31];
assign sp = m_Register.regs[2];
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(Ins[31:0]),
    .imm(Imm)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(Imm),
    .o(shiftOut)
);

Adder m_Adder_2(
    .a(PC),
    .b(shiftOut),
    .sum(PC_branch)
);

and A1(andOut, branch, zero);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(andOut),
    .s0(PC_plus4),
    .s1(PC_branch),
    .out(MuxPC_Out)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc),
    .s0(readData2),
    .s1(Imm),
    .out(MuxALU_Out)
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

Mux2to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg),
    .s0(ALU_Out),
    .s1(readData),
    .out(writeData)
);

endmodule
