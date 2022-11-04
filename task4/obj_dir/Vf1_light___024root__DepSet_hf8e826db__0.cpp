// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_light.h for the primary calling header

#include "verilated.h"

#include "Vf1_light___024root.h"

extern const VlUnpacked<CData/*7:0*/, 512> Vf1_light__ConstPool__TABLE_headd0a90_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vf1_light__ConstPool__TABLE_h478eca69_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vf1_light__ConstPool__TABLE_hd615ad1c_0;

VL_INLINE_OPT void Vf1_light___024root___sequent__TOP__0(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx2;
    // Body
    vlSelf->__Vdly__top__DOT__myLfsr__DOT__sreg = vlSelf->top__DOT__myLfsr__DOT__sreg;
    __Vtableidx2 = vlSelf->top__DOT__myFiniteStateMachine__DOT__current_state;
    vlSelf->data_out = Vf1_light__ConstPool__TABLE_headd0a90_0
        [__Vtableidx2];
    vlSelf->top__DOT__cmd_seq = Vf1_light__ConstPool__TABLE_h478eca69_0
        [__Vtableidx2];
    vlSelf->top__DOT__cmd_delay = Vf1_light__ConstPool__TABLE_hd615ad1c_0
        [__Vtableidx2];
    vlSelf->__Vdly__top__DOT__myLfsr__DOT__sreg = (
                                                   (0x7eU 
                                                    & ((IData)(vlSelf->top__DOT__myLfsr__DOT__sreg) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_8(
                                                                    (0x44U 
                                                                     & (IData)(vlSelf->top__DOT__myLfsr__DOT__sreg)))));
    vlSelf->top__DOT__myFiniteStateMachine__DOT__current_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->top__DOT__myFiniteStateMachine__DOT__next_state));
}

VL_INLINE_OPT void Vf1_light___024root___sequent__TOP__1(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___sequent__TOP__1\n"); );
    // Init
    SData/*15:0*/ __Vdly__top__DOT__myClktick__DOT__count;
    // Body
    __Vdly__top__DOT__myClktick__DOT__count = vlSelf->top__DOT__myClktick__DOT__count;
    if (vlSelf->rst) {
        vlSelf->top__DOT__myClktick__DOT__tick = 0U;
        __Vdly__top__DOT__myClktick__DOT__count = vlSelf->n;
        vlSelf->top__DOT__myDelay__DOT__current_state = 0U;
    } else {
        if (vlSelf->top__DOT__cmd_seq) {
            if ((0U == (IData)(vlSelf->top__DOT__myClktick__DOT__count))) {
                vlSelf->top__DOT__myClktick__DOT__tick = 1U;
                __Vdly__top__DOT__myClktick__DOT__count 
                    = vlSelf->n;
            } else {
                __Vdly__top__DOT__myClktick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->top__DOT__myClktick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->top__DOT__myClktick__DOT__tick = 0U;
            }
        }
        vlSelf->top__DOT__myDelay__DOT__current_state 
            = vlSelf->top__DOT__myDelay__DOT__next_state;
    }
    vlSelf->top__DOT__myDelay__DOT__count = (0x3ffU 
                                             & ((((IData)(vlSelf->rst) 
                                                  | (IData)(vlSelf->top__DOT__cmd_delay)) 
                                                 | (0U 
                                                    == (IData)(vlSelf->top__DOT__myDelay__DOT__count)))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__myLfsr__DOT__sreg) 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(vlSelf->top__DOT__myDelay__DOT__count) 
                                                 - (IData)(1U))));
    vlSelf->top__DOT__myClktick__DOT__count = __Vdly__top__DOT__myClktick__DOT__count;
}

extern const VlUnpacked<SData/*8:0*/, 2048> Vf1_light__ConstPool__TABLE_h54030826_0;

VL_INLINE_OPT void Vf1_light___024root___combo__TOP__0(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___combo__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__mux_o) 
                     << 0xaU) | (((IData)(vlSelf->trigger) 
                                  << 9U) | (IData)(vlSelf->top__DOT__myFiniteStateMachine__DOT__current_state)));
    vlSelf->top__DOT__myFiniteStateMachine__DOT__next_state 
        = Vf1_light__ConstPool__TABLE_h54030826_0[__Vtableidx1];
    vlSelf->top__DOT__mux_o = ((~ (IData)(vlSelf->top__DOT__mux_o)) 
                               & ((0U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                                  & ((1U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                                     & (2U == vlSelf->top__DOT__myDelay__DOT__current_state))));
}

VL_INLINE_OPT void Vf1_light___024root___sequent__TOP__2(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__myLfsr__DOT__sreg = vlSelf->__Vdly__top__DOT__myLfsr__DOT__sreg;
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

void Vf1_light___024root___eval(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_light___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1_light___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vf1_light___024root___combo__TOP__0(vlSelf);
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_light___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vf1_light___024root___change_request_1(Vf1_light___024root* vlSelf);

VL_INLINE_OPT QData Vf1_light___024root___change_request(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___change_request\n"); );
    // Body
    return (Vf1_light___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vf1_light___024root___change_request_1(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__mux_o ^ vlSelf->__Vchglast__TOP__top__DOT__mux_o));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__mux_o ^ vlSelf->__Vchglast__TOP__top__DOT__mux_o))) VL_DBG_MSGF("        CHANGE: f1_light.sv:13: top.mux_o\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__mux_o = vlSelf->top__DOT__mux_o;
    return __req;
}

#ifdef VL_DEBUG
void Vf1_light___024root___eval_debug_assertions(Vf1_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
    if (VL_UNLIKELY((vlSelf->n & 0xe0U))) {
        Verilated::overWidthError("n");}
}
#endif  // VL_DEBUG
