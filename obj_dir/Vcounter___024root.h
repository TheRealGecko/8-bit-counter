// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter.h for the primary calling header

#ifndef VERILATED_VCOUNTER___024ROOT_H_
#define VERILATED_VCOUNTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcounter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounter___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tt_um_eight_bit_counter_tb__DOT__clk;
    CData/*0:0*/ tt_um_eight_bit_counter_tb__DOT__rst;
    CData/*0:0*/ tt_um_eight_bit_counter_tb__DOT__set_val_ena;
    CData/*0:0*/ tt_um_eight_bit_counter_tb__DOT__out_ena;
    CData/*7:0*/ tt_um_eight_bit_counter_tb__DOT__val;
    CData/*7:0*/ tt_um_eight_bit_counter_tb__DOT__dut__DOT__count;
    CData/*0:0*/ __VdlySet__tt_um_eight_bit_counter_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlyVal__tt_um_eight_bit_counter_tb__DOT__clk__v1;
    CData/*0:0*/ __VdlySet__tt_um_eight_bit_counter_tb__DOT__clk__v1;
    CData/*0:0*/ __VdlySet__tt_um_eight_bit_counter_tb__DOT__rst__v0;
    CData/*0:0*/ __VdlySet__tt_um_eight_bit_counter_tb__DOT__rst__v1;
    CData/*0:0*/ __VdlySet__tt_um_eight_bit_counter_tb__DOT__rst__v2;
    CData/*0:0*/ __VdlySet__tt_um_eight_bit_counter_tb__DOT__set_val_ena__v0;
    CData/*0:0*/ __VdlySet__tt_um_eight_bit_counter_tb__DOT__set_val_ena__v1;
    CData/*0:0*/ __VdlySet__tt_um_eight_bit_counter_tb__DOT__set_val_ena__v2;
    CData/*0:0*/ __VdlySet__tt_um_eight_bit_counter_tb__DOT__out_ena__v0;
    CData/*0:0*/ __VdlySet__tt_um_eight_bit_counter_tb__DOT__out_ena__v1;
    CData/*0:0*/ __VdlySet__tt_um_eight_bit_counter_tb__DOT__val__v0;
    CData/*0:0*/ __VdlySet__tt_um_eight_bit_counter_tb__DOT__val__v1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tt_um_eight_bit_counter_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tt_um_eight_bit_counter_tb__DOT__rst__0;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vcounter__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcounter___024root(Vcounter__Syms* symsp, const char* namep);
    ~Vcounter___024root();
    VL_UNCOPYABLE(Vcounter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
