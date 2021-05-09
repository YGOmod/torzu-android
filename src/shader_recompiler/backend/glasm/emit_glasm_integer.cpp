// Copyright 2021 yuzu Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "shader_recompiler/backend/glasm/emit_context.h"
#include "shader_recompiler/backend/glasm/emit_glasm_instructions.h"
#include "shader_recompiler/frontend/ir/value.h"

namespace Shader::Backend::GLASM {

void EmitIAdd32(EmitContext& ctx, IR::Inst& inst, ScalarS32 a, ScalarS32 b) {
    ctx.Add("ADD.S {}.x,{},{};", inst, a, b);
}

void EmitIAdd64([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] Register a,
                [[maybe_unused]] Register b) {
    throw NotImplementedException("GLASM instruction");
}

void EmitISub32(EmitContext& ctx, IR::Inst& inst, ScalarS32 a, ScalarS32 b) {
    ctx.Add("SUB.S {}.x,{},{};", inst, a, b);
}

void EmitISub64([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] Register a,
                [[maybe_unused]] Register b) {
    throw NotImplementedException("GLASM instruction");
}

void EmitIMul32(EmitContext& ctx, IR::Inst& inst, ScalarS32 a, ScalarS32 b) {
    ctx.Add("MUL.S {}.x,{},{};", inst, a, b);
}

void EmitINeg32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] ScalarS32 value) {
    throw NotImplementedException("GLASM instruction");
}

void EmitINeg64([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] Register value) {
    throw NotImplementedException("GLASM instruction");
}

void EmitIAbs32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] ScalarS32 value) {
    throw NotImplementedException("GLASM instruction");
}

void EmitIAbs64([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] Register value) {
    throw NotImplementedException("GLASM instruction");
}

void EmitShiftLeftLogical32(EmitContext& ctx, IR::Inst& inst, ScalarU32 base, ScalarU32 shift) {
    ctx.Add("SHL.U {}.x,{},{};", inst, base, shift);
}

void EmitShiftLeftLogical64([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] Register base,
                            [[maybe_unused]] Register shift) {
    throw NotImplementedException("GLASM instruction");
}

void EmitShiftRightLogical32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] ScalarU32 base,
                             [[maybe_unused]] ScalarU32 shift) {
    throw NotImplementedException("GLASM instruction");
}

void EmitShiftRightLogical64([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] Register base,
                             [[maybe_unused]] Register shift) {
    throw NotImplementedException("GLASM instruction");
}

void EmitShiftRightArithmetic32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] ScalarS32 base,
                                [[maybe_unused]] ScalarS32 shift) {
    throw NotImplementedException("GLASM instruction");
}

void EmitShiftRightArithmetic64([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] Register base,
                                [[maybe_unused]] Register shift) {
    throw NotImplementedException("GLASM instruction");
}

void EmitBitwiseAnd32(EmitContext& ctx, IR::Inst& inst, ScalarS32 a, ScalarS32 b) {
    ctx.Add("AND.S {}.x,{},{};", inst, a, b);
}

void EmitBitwiseOr32(EmitContext& ctx, IR::Inst& inst, ScalarS32 a, ScalarS32 b) {
    ctx.Add("OR.S {}.x,{},{};", inst, a, b);
}

void EmitBitwiseXor32(EmitContext& ctx, IR::Inst& inst, ScalarS32 a, ScalarS32 b) {
    ctx.Add("XOR.S {}.x,{},{};", inst, a, b);
}

void EmitBitFieldInsert(EmitContext& ctx, IR::Inst& inst, ScalarS32 base, ScalarS32 insert,
                        ScalarS32 offset, ScalarS32 count) {
    ctx.Add("MOV.U RC.x,{};MOV.U RC.y,{};", count, offset);
    ctx.Add("BFI.S {},RC,{},{};", inst, insert, base);
}

void EmitBitFieldSExtract(EmitContext& ctx, IR::Inst& inst, ScalarS32 base, ScalarS32 offset,
                          ScalarS32 count) {
    ctx.Add("MOV.U RC.x,{};MOV.U RC.y,{};", count, offset);
    ctx.Add("BFE.S {},RC,{};", inst, base);
}

void EmitBitFieldUExtract(EmitContext& ctx, IR::Inst& inst, ScalarU32 base, ScalarU32 offset,
                          ScalarU32 count) {
    ctx.Add("MOV.U RC.x,{};MOV.U RC.y,{};", count, offset);
    ctx.Add("BFE.U {},RC,{};", inst, base);
}

void EmitBitReverse32(EmitContext& ctx, IR::Inst& inst, ScalarS32 value) {
    ctx.Add("BFR {},{};", inst, value);
}

void EmitBitCount32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] ScalarS32 value) {
    throw NotImplementedException("GLASM instruction");
}

void EmitBitwiseNot32(EmitContext& ctx, IR::Inst& inst, ScalarS32 value) {
    ctx.Add("NOT.S {},{};", inst, value);
}

void EmitFindSMsb32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] ScalarS32 value) {
    throw NotImplementedException("GLASM instruction");
}

void EmitFindUMsb32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] ScalarU32 value) {
    throw NotImplementedException("GLASM instruction");
}

void EmitSMin32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] ScalarS32 a,
                [[maybe_unused]] ScalarS32 b) {
    throw NotImplementedException("GLASM instruction");
}

void EmitUMin32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] ScalarU32 a,
                [[maybe_unused]] ScalarU32 b) {
    throw NotImplementedException("GLASM instruction");
}

void EmitSMax32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] ScalarS32 a,
                [[maybe_unused]] ScalarS32 b) {
    throw NotImplementedException("GLASM instruction");
}

void EmitUMax32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] ScalarU32 a,
                [[maybe_unused]] ScalarU32 b) {
    throw NotImplementedException("GLASM instruction");
}

void EmitSClamp32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] IR::Inst& inst,
                  [[maybe_unused]] ScalarS32 value, [[maybe_unused]] ScalarS32 min,
                  [[maybe_unused]] ScalarS32 max) {
    throw NotImplementedException("GLASM instruction");
}

void EmitUClamp32([[maybe_unused]] EmitContext& ctx, [[maybe_unused]] IR::Inst& inst,
                  [[maybe_unused]] ScalarU32 value, [[maybe_unused]] ScalarU32 min,
                  [[maybe_unused]] ScalarU32 max) {
    throw NotImplementedException("GLASM instruction");
}

void EmitSLessThan(EmitContext& ctx, IR::Inst& inst, ScalarS32 lhs, ScalarS32 rhs) {
    ctx.Add("SLT.S {},{},{};", inst, lhs, rhs);
}

void EmitULessThan(EmitContext& ctx, IR::Inst& inst, ScalarU32 lhs, ScalarU32 rhs) {
    ctx.Add("SLT.U {},{},{};", inst, lhs, rhs);
}

void EmitIEqual(EmitContext& ctx, IR::Inst& inst, ScalarS32 lhs, ScalarS32 rhs) {
    ctx.Add("SEQ.S {},{},{};", inst, lhs, rhs);
}

void EmitSLessThanEqual(EmitContext& ctx, IR::Inst& inst, ScalarS32 lhs, ScalarS32 rhs) {
    ctx.Add("SLE.S {},{},{};", inst, lhs, rhs);
}

void EmitULessThanEqual(EmitContext& ctx, IR::Inst& inst, ScalarU32 lhs, ScalarU32 rhs) {
    ctx.Add("SLE.U {},{},{};", inst, lhs, rhs);
}

void EmitSGreaterThan(EmitContext& ctx, IR::Inst& inst, ScalarS32 lhs, ScalarS32 rhs) {
    ctx.Add("SGT.S {},{},{};", inst, lhs, rhs);
}

void EmitUGreaterThan(EmitContext& ctx, IR::Inst& inst, ScalarU32 lhs, ScalarU32 rhs) {
    ctx.Add("SGT.U {},{},{};", inst, lhs, rhs);
}

void EmitINotEqual(EmitContext& ctx, IR::Inst& inst, ScalarS32 lhs, ScalarS32 rhs) {
    ctx.Add("SNE.U {},{},{};", inst, lhs, rhs);
}

void EmitSGreaterThanEqual(EmitContext& ctx, IR::Inst& inst, ScalarS32 lhs, ScalarS32 rhs) {
    ctx.Add("SGE.S {},{},{};", inst, lhs, rhs);
}

void EmitUGreaterThanEqual(EmitContext& ctx, IR::Inst& inst, ScalarU32 lhs, ScalarU32 rhs) {
    ctx.Add("SGE.U {},{},{};", inst, lhs, rhs);
}

} // namespace Shader::Backend::GLASM
