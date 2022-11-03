// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm___024root.h"

extern const VlUnpacked<CData/*7:0*/, 512> Vf1_fsm__ConstPool__TABLE_headd0a90_0;

VL_INLINE_OPT void Vf1_fsm___024root___sequent__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx2;
    // Body
    __Vtableidx2 = vlSelf->f1_fsm__DOT__current_state;
    vlSelf->data_out = Vf1_fsm__ConstPool__TABLE_headd0a90_0
        [__Vtableidx2];
    vlSelf->f1_fsm__DOT__current_state = ((IData)(vlSelf->rst)
                                           ? 0U : (IData)(vlSelf->f1_fsm__DOT__next_state));
}

extern const VlUnpacked<SData/*8:0*/, 1024> Vf1_fsm__ConstPool__TABLE_h22a7becd_0;

VL_INLINE_OPT void Vf1_fsm___024root___combo__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___combo__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->en) << 9U) | (IData)(vlSelf->f1_fsm__DOT__current_state));
    vlSelf->f1_fsm__DOT__next_state = Vf1_fsm__ConstPool__TABLE_h22a7becd_0
        [__Vtableidx1];
}

void Vf1_fsm___024root___eval(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_fsm___024root___sequent__TOP__0(vlSelf);
    }
    Vf1_fsm___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vf1_fsm___024root___eval_debug_assertions(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
