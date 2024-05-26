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

wire [31:0] PC, PC_plus4, MuxSelB_Out, writeData;
wire [3:0] ALUCtl;
wire funct7;
wire [2:0] funct3;
// 5-stage pipeline registers
wire [31:0] inst_IF, inst_ID;
wire [4:0] writeReg_EX, writeReg_MEM, writeReg_WB;
wire [31:0] rs1_ID, rs1_EX;
wire [31:0] rs2_ID, rs2_EX, rs2_MEM;
wire [31:0] imm_ID, imm_EX;
wire [31:0] ALUOut_EX, ALUOut_MEM, ALUOut_WB;
wire [31:0] readData_MEM, readData_WB;
wire memRead_ID, memRead_EX, memRead_MEM;
wire memWrite_ID, memWrite_EX, memWrite_MEM;
wire memtoReg_ID, memtoReg_EX, memtoReg_MEM, memtoReg_WB;
wire regWrite_ID, regWrite_EX, regWrite_MEM, regWrite_WB;
wire [1:0] ALUOp_ID, ALUOp_EX;
wire SelB_ID, SelB_EX; 


PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(PC_plus4),
    .pc_o(PC)
);

Adder m_Adder_1(
    .a(PC),
    .b(4),
    .sum(PC_plus4)
);

InstructionMemory m_InstMem(
    .readAddr(PC),
    .inst(inst_IF)
);

IDReg m_IDReg(
    .clk(clk),
    .rst(start),
    .inst_in(inst_IF),
    .inst_out(inst_ID)
);

Control m_Control(
    .opcode(inst_ID[6:0]),
    .memRead(memRead_ID), // 1 bit
    .memtoReg(memtoReg_ID), // 1 bits
    .ALUOp(ALUOp_ID), // 2 bits
    .memWrite(memWrite_ID), // 1 bit
    .SelB(SelB_ID), // 1 bit
    .regWrite(regWrite_ID) // 1 bit
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite_WB),
    .readReg1(inst_ID[19:15]),
    .readReg2(inst_ID[24:20]),
    .writeReg(writeReg_WB),
    .writeData(writeData),
    .readData1(rs1_ID),
    .readData2(rs2_ID)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(inst_ID[31:0]),
    .imm(imm_ID)
);

EXReg m_EXReg(
    .clk(clk),
    .rst(start),
    .memRead_in(memRead_ID),
    .memWrite_in(memWrite_ID),
    .memtoReg_in(memtoReg_ID),
    .regWrite_in(regWrite_ID),
    .ALUOp_in(ALUOp_ID),
    .SelB_in(SelB_ID),
    .rs1_in(rs1_ID),
    .rs2_in(rs2_ID),
    .imm_in(imm_ID),
    .funct7_in(inst_ID[30]),
    .funct3_in(inst_ID[14:12]),
    .writeReg_in(inst_ID[11:7]),
    .memRead_out(memRead_EX),
    .memWrite_out(memWrite_EX),
    .memtoReg_out(memtoReg_EX),
    .regWrite_out(regWrite_EX),
    .ALUOp_out(ALUOp_EX),
    .SelB_out(SelB_EX),
    .rs1_out(rs1_EX),
    .rs2_out(rs2_EX),
    .imm_out(imm_EX),
    .funct7_out(funct7),
    .funct3_out(funct3),
    .writeReg_out(writeReg_EX)
);

Mux2to1 #(.size(32)) m_Mux_SelB(
    .sel(SelB_EX),
    .s0(rs2_EX),
    .s1(imm_EX),
    .out(MuxSelB_Out)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp_EX),
    .funct7(funct7),
    .funct3(funct3),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(rs1_EX),
    .B(MuxSelB_Out),
    .ALUOut(ALUOut_EX)
);

MEMReg m_MEMReg(
    .clk(clk),
    .rst(start),
    .memRead_in(memRead_EX),
    .memWrite_in(memWrite_EX),
    .memtoReg_in(memtoReg_EX),
    .regWrite_in(regWrite_EX),
    .ALUResult_in(ALUOut_EX),
    .rs2_in(rs2_EX),
    .writeReg_in(writeReg_EX),
    .memRead_out(memRead_MEM),
    .memWrite_out(memWrite_MEM),
    .memtoReg_out(memtoReg_MEM),
    .regWrite_out(regWrite_MEM),
    .ALUResult_out(ALUOut_MEM),
    .rs2_out(rs2_MEM),
    .writeReg_out(writeReg_MEM)
);


DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite_MEM),
    .memRead(memRead_MEM),
    .address(ALUOut_MEM),
    .writeData(rs2_MEM),
    .readData(readData_MEM)
);

WBReg m_WBReg(
    .clk(clk),
    .rst(start),
    .memtoReg_in(memtoReg_MEM),
    .regWrite_in(regWrite_MEM),
    .ALUResult_in(ALUOut_MEM),
    .readData_in(readData_MEM),
    .writeReg_in(writeReg_MEM),
    .memtoReg_out(memtoReg_WB),
    .regWrite_out(regWrite_WB),
    .ALUResult_out(ALUOut_WB),
    .readData_out(readData_WB),
    .writeReg_out(writeReg_WB)
);


Mux2to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg_WB),
    .s0(ALUOut_WB),
    .s1(readData_WB),
    .out(writeData)
);

endmodule
