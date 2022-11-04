// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_light.h for the primary calling header

#ifndef VERILATED_VF1_LIGHT___024ROOT_H_
#define VERILATED_VF1_LIGHT___024ROOT_H_  // guard

#include "verilated.h"

class Vf1_light__Syms;

class Vf1_light___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    VL_IN8(n,4,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ top__DOT__cmd_seq;
    CData/*0:0*/ top__DOT__cmd_delay;
    CData/*0:0*/ top__DOT__mux_o;
    CData/*0:0*/ top__DOT__clktick_o;
    CData/*0:0*/ top__DOT__time_out;
    CData/*7:0*/ top__DOT____Vcellout__myClktick__data_out;
    CData/*6:0*/ top__DOT__myLfsr__DOT__sreg;
    CData/*0:0*/ top__DOT__myClktick__DOT__tick;
    CData/*6:0*/ __Vdly__top__DOT__myLfsr__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    CData/*0:0*/ __Vchglast__TOP__top__DOT__mux_o;
    SData/*15:0*/ top__DOT__myClktick__DOT__count;
    SData/*9:0*/ top__DOT__myDelay__DOT__count;
    SData/*8:0*/ top__DOT__myFiniteStateMachine__DOT__current_state;
    SData/*8:0*/ top__DOT__myFiniteStateMachine__DOT__next_state;
    IData/*31:0*/ top__DOT__myDelay__DOT__current_state;
    IData/*31:0*/ top__DOT__myDelay__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vf1_light__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_light___024root(Vf1_light__Syms* symsp, const char* name);
    ~Vf1_light___024root();
    VL_UNCOPYABLE(Vf1_light___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
