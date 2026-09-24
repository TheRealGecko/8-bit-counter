// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcounter__Syms.h"


void Vcounter___024root__trace_chg_0_sub_0(Vcounter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcounter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root__trace_chg_0\n"); );
    // Body
    Vcounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter___024root*>(voidSelf);
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcounter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcounter___024root__trace_chg_0_sub_0(Vcounter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root__trace_chg_0_sub_0\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tt_um_eight_bit_counter_tb__DOT__clk));
        bufp->chgBit(oldp+1,(vlSelfRef.tt_um_eight_bit_counter_tb__DOT__out_ena));
        bufp->chgCData(oldp+2,(vlSelfRef.tt_um_eight_bit_counter_tb__DOT__val),8);
    }
    bufp->chgBit(oldp+3,(vlSelfRef.tt_um_eight_bit_counter_tb__DOT__rst));
    bufp->chgBit(oldp+4,(vlSelfRef.tt_um_eight_bit_counter_tb__DOT__set_val_ena));
    bufp->chgCData(oldp+5,(((IData)(vlSelfRef.tt_um_eight_bit_counter_tb__DOT__dut__DOT__count) 
                            & (- (IData)((IData)(vlSelfRef.tt_um_eight_bit_counter_tb__DOT__out_ena))))),8);
    bufp->chgCData(oldp+6,(vlSelfRef.tt_um_eight_bit_counter_tb__DOT__dut__DOT__count),8);
}

void Vcounter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root__trace_cleanup\n"); );
    // Body
    Vcounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter___024root*>(voidSelf);
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
