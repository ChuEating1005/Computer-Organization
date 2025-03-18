module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

/**** 5-stage pipeline registers ***/

/* IF */
wire [31:0] PC_plus4_IF, Mux_PC_out, PC_IF, inst_IF;
/* ID */
wire memRead_ID, memWrite_ID, regWrite_ID, SelA_ID, SelB_ID, stall_PC, stall_ID, stall_EX;
wire [1:0] memtoReg_ID, ALUOp_ID;
wire [31:0] PC_ID, inst_ID, rs1_ID, rs2_ID, imm_ID;
/* EX */
wire memRead_EX, memWrite_EX, regWrite_EX, SelA_EX, SelB_EX, funct7, BrEq, BrLt, PCsel;
wire [1:0] memtoReg_EX, ALUOp_EX, ForwardA, ForwardB;
wire [2:0] funct3;
wire [3:0] ALUCtl;
wire [4:0] writeReg_EX, rs1Addr_EX, rs2Addr_EX;
wire [6:0] opcode_EX;
wire [31:0] rs1_EX, rs2_EX, PC_EX, imm_EX, MuxForwardA_out, MuxForwardB_out, MuxSelA_out, MuxSelB_out, ALUOut_EX;

/* MEM */
wire memRead_MEM, memWrite_MEM, regWrite_MEM;
wire [1:0] memtoReg_MEM;
wire [4:0] writeReg_MEM;
wire [31:0] rs2_MEM, PC_MEM, ALUOut_MEM, readData_MEM;
/* WB */
wire regWrite_WB;
wire [1:0] memtoReg_WB;
wire [4:0] writeReg_WB;
wire [31:0] ALUOut_WB, readData_WB, PC_WB, PC_plus4_WB, writeData;


/**** 5-stage pipeline modules ***/
/* IF */
Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(PCsel),
    .s0(PC_plus4_IF),
    .s1(ALUOut_EX),
    .out(Mux_PC_out)
);

PC m_PC(
    .clk(clk),
    .rst(start),
    .stall(stall_PC),
    .pc_i(Mux_PC_out),
    .pc_o(PC_IF)
);

Adder m_Adder_1(
    .a(PC_IF),
    .b(4),
    .sum(PC_plus4_IF)
);

InstructionMemory m_InstMem(
    .readAddr(PC_IF),
    .inst(inst_IF)
);

IDReg m_IDReg(
    .clk(clk),
    .rst(start),
    .stall(stall_ID),
    .flush(PCsel),
    .inst_in(inst_IF),
    .PC_in(PC_IF),
    .inst_out(inst_ID),
    .PC_out(PC_ID)
);

/* ID */

Control m_Control(
    .opcode(inst_ID[6:0]),
    .stall(stall_EX),
    .memRead(memRead_ID), // 1 bit
    .memtoReg(memtoReg_ID), // 2 bits
    .ALUOp(ALUOp_ID), // 2 bits
    .memWrite(memWrite_ID), // 1 bit
    .SelA(SelA_ID), // 1 bit
    .SelB(SelB_ID), // 1 bit
    .regWrite(regWrite_ID) // 1 bit
);

HazardDetection m_HazardDetection(
    .memRead_EX(memRead_EX),
    .rs1_ID(inst_ID[19:15]),
    .rs2_ID(inst_ID[24:20]),
    .rs2_EX(writeReg_EX),
    .stall_ID(stall_ID),
    .stall_EX(stall_EX),
    .stall_PC(stall_PC)
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite_WB), // WB
    .readReg1(inst_ID[19:15]), //ID
    .readReg2(inst_ID[24:20]), //ID
    .writeReg(writeReg_WB), // WB
    .writeData(writeData), // WB
    .readData1(rs1_ID), // ID
    .readData2(rs2_ID) // ID
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
    .flush(PCsel),
    .memRead_in(memRead_ID),
    .memWrite_in(memWrite_ID),
    .memtoReg_in(memtoReg_ID),
    .regWrite_in(regWrite_ID),
    .ALUOp_in(ALUOp_ID),
    .SelA_in(SelA_ID),
    .SelB_in(SelB_ID),
    .rs1Addr_in(inst_ID[19:15]),
    .rs2Addr_in(inst_ID[24:20]),
    .rs1_in(rs1_ID),
    .rs2_in(rs2_ID),
    .imm_in(imm_ID),
    .opcode_in(inst_ID[6:0]),
    .funct7_in(inst_ID[30]),
    .funct3_in(inst_ID[14:12]),
    .writeReg_in(inst_ID[11:7]),
    .PC_in(PC_ID),
    .memRead_out(memRead_EX),
    .memWrite_out(memWrite_EX),
    .memtoReg_out(memtoReg_EX),
    .regWrite_out(regWrite_EX),
    .ALUOp_out(ALUOp_EX),
    .SelA_out(SelA_EX),
    .SelB_out(SelB_EX),
    .rs1Addr_out(rs1Addr_EX),
    .rs2Addr_out(rs2Addr_EX),
    .rs1_out(rs1_EX),
    .rs2_out(rs2_EX),
    .imm_out(imm_EX),
    .opcode_out(opcode_EX),
    .funct7_out(funct7),
    .funct3_out(funct3),
    .writeReg_out(writeReg_EX),
    .PC_out(PC_EX)
);

/* EX */
Mux3to1 m_Mux_ForwardA(
    .sel(ForwardA),
    .s0(rs1_EX),
    .s1(writeData),
    .s2(ALUOut_MEM),
    .out(MuxForwardA_out)
);

Mux2to1 m_Mux_SelA(
    .sel(SelA_EX),
    .s0(MuxForwardA_out),
    .s1(PC_EX),
    .out(MuxSelA_out)
);

Mux3to1 m_Mux_ForwardB(
    .sel(ForwardB),
    .s0(rs2_EX),
    .s1(writeData),
    .s2(ALUOut_MEM),
    .out(MuxForwardB_out)
);

Mux2to1 m_Mux_SelB(
    .sel(SelB_EX),
    .s0(MuxForwardB_out),
    .s1(imm_EX),
    .out(MuxSelB_out)
);

BranchComp m_BranchComp(
    .readData1(MuxForwardA_out),
    .readData2(MuxForwardB_out),
    .BrEq(BrEq),
    .BrLt(BrLt)
);

Control2 m_Control2(
    .opcode(opcode_EX),
    .funct3(funct3),
    .BrEq(BrEq),
    .BrLt(BrLt),
    .PCsel(PCsel)
);


ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp_EX),
    .funct7(funct7),
    .funct3(funct3),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(MuxSelA_out),
    .B(MuxSelB_out),
    .ALUOut(ALUOut_EX)
);

Forwarding m_Forwarding(
    .regWrite_WB(regWrite_WB),
    .regWrite_MEM(regWrite_MEM),
    .rd_MEM(writeReg_MEM),
    .rd_WB(writeReg_WB),
    .rs1_EX(rs1Addr_EX),
    .rs2_EX(rs2Addr_EX),
    .ForwardA(ForwardA),
    .ForwardB(ForwardB)
);

MEMReg m_MEMReg(
    .clk(clk),
    .rst(start),
    .memRead_in(memRead_EX),
    .memWrite_in(memWrite_EX),
    .memtoReg_in(memtoReg_EX),
    .regWrite_in(regWrite_EX),
    .ALUResult_in(ALUOut_EX),
    .rs2_in(MuxForwardB_out),
    .writeReg_in(writeReg_EX),
    .PC_in(PC_EX),
    .memRead_out(memRead_MEM),
    .memWrite_out(memWrite_MEM),
    .memtoReg_out(memtoReg_MEM),
    .regWrite_out(regWrite_MEM),
    .ALUResult_out(ALUOut_MEM),
    .rs2_out(rs2_MEM),
    .writeReg_out(writeReg_MEM),
    .PC_out(PC_MEM)
);


/* MEM */
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
    .PC_in(PC_MEM),
    .memtoReg_out(memtoReg_WB),
    .regWrite_out(regWrite_WB),
    .ALUResult_out(ALUOut_WB),
    .readData_out(readData_WB),
    .writeReg_out(writeReg_WB),
    .PC_out(PC_WB)
);

/* WB */
Adder m_Adder_2(
    .a(PC_WB),
    .b(4),
    .sum(PC_plus4_WB)
);

Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg_WB),
    .s0(readData_WB),
    .s1(ALUOut_WB),
    .s2(PC_plus4_WB),
    .out(writeData)
);

endmodule
