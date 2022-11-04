// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_light.h for the primary calling header

#include "verilated.h"

#include "Vf1_light___024root.h"

VL_ATTR_COLD void Vf1_light___024root___initial__TOP__0(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__myDelay__DOT__count = 0U;
}

extern const VlUnpacked<SData/*8:0*/, 2048> Vf1_light__ConstPool__TABLE_h54030826_0;

VL_ATTR_COLD void Vf1_light___024root___settle__TOP__0(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___settle__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__mux_o = ((~ (IData)(vlSelf->top__DOT__mux_o)) 
                               & ((0U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                                  & ((1U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                                     & (2U == vlSelf->top__DOT__myDelay__DOT__current_state))));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__mux_o) 
                     << 0xaU) | (((IData)(vlSelf->trigger) 
                                  << 9U) | (IData)(vlSelf->top__DOT__myFiniteStateMachine__DOT__current_state)));
    vlSelf->top__DOT__myFiniteStateMachine__DOT__next_state 
        = Vf1_light__ConstPool__TABLE_h54030826_0[__Vtableidx1];
    vlSelf->top__DOT__myDelay__DOT__next_state = ((0U 
                                                   == vlSelf->top__DOT__myDelay__DOT__current_state)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__cmd_delay)
                                                    ? 1U
                                                    : vlSelf->top__DOT__myDelay__DOT__current_state)
                                                   : 
                                                  ((1U 
                                                    == vlSelf->top__DOT__myDelay__DOT__current_state)
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__myDelay__DOT__count))
                                                     ? 2U
                                                     : vlSelf->top__DOT__myDelay__DOT__current_state)
                                                    : 
                                                   ((2U 
                                                     == vlSelf->top__DOT__myDelay__DOT__current_state)
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__cmd_delay)
                                                      ? 3U
                                                      : 0U)
                                                     : 
                                                    ((3U 
                                                      == vlSelf->top__DOT__myDelay__DOT__current_state)
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__cmd_delay)
                                                       ? vlSelf->top__DOT__myDelay__DOT__current_state
                                                       : 0U)
                                                      : 0U))));
}

VL_ATTR_COLD void Vf1_light___024root___eval_initial(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vf1_light___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_light___024root___eval_settle(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___eval_settle\n"); );
    // Body
    Vf1_light___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vf1_light___024root___final(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___final\n"); );
}

VL_ATTR_COLD void Vf1_light___024root___ctor_var_reset(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->n = VL_RAND_RESET_I(5);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cmd_delay = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mux_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clktick_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__time_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__myClktick__data_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__myLfsr__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__myClktick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__myClktick__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__myDelay__DOT__count = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__myDelay__DOT__current_state = 0;
    vlSelf->top__DOT__myDelay__DOT__next_state = 0;
    vlSelf->top__DOT__myFiniteStateMachine__DOT__current_state = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__myFiniteStateMachine__DOT__next_state = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__top__DOT__myLfsr__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->__Vchglast__TOP__top__DOT__mux_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
