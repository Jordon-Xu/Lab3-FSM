// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__top__DOT__my_clktick__DOT__count;
    __Vdly__top__DOT__my_clktick__DOT__count = 0;
    // Body
    __Vdly__top__DOT__my_clktick__DOT__count = vlSelf->top__DOT__my_clktick__DOT__count;
    if (vlSelf->rst) {
        vlSelf->top__DOT__tick = 0U;
        __Vdly__top__DOT__my_clktick__DOT__count = 0x18U;
    } else if (vlSelf->en) {
        if ((0U == (IData)(vlSelf->top__DOT__my_clktick__DOT__count))) {
            vlSelf->top__DOT__tick = 1U;
            __Vdly__top__DOT__my_clktick__DOT__count = 0x18U;
        } else {
            __Vdly__top__DOT__my_clktick__DOT__count 
                = (0xffffU & ((IData)(vlSelf->top__DOT__my_clktick__DOT__count) 
                              - (IData)(1U)));
            vlSelf->top__DOT__tick = 0U;
        }
    }
    vlSelf->top__DOT__my_clktick__DOT__count = __Vdly__top__DOT__my_clktick__DOT__count;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__my_fsm__DOT__current_state = 
        ((IData)(vlSelf->rst) ? 0U : vlSelf->top__DOT__my_fsm__DOT__next_state);
    vlSelf->data_out = (((((((((0U == vlSelf->top__DOT__my_fsm__DOT__current_state) 
                               | (1U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                              | (2U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                             | (3U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                            | (4U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                           | (5U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                          | (6U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                         | (7U == vlSelf->top__DOT__my_fsm__DOT__current_state))
                         ? ((0U == vlSelf->top__DOT__my_fsm__DOT__current_state)
                             ? 0U : ((1U == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                      ? 1U : ((2U == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                               ? 3U
                                               : ((3U 
                                                   == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                                      ? 0x3fU
                                                      : 0x7fU)))))))
                         : ((8U == vlSelf->top__DOT__my_fsm__DOT__current_state)
                             ? 0xffU : 0U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->top__DOT__my_fsm__DOT__current_state) 
               | (1U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
              | (2U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
             | (3U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
            | (4U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
           | (5U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
          | (6U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
         | (7U == vlSelf->top__DOT__my_fsm__DOT__current_state))) {
        if ((0U == vlSelf->top__DOT__my_fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__my_fsm__DOT__next_state = 1U;
            }
        } else if ((1U == vlSelf->top__DOT__my_fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__my_fsm__DOT__next_state = 2U;
            }
        } else if ((2U == vlSelf->top__DOT__my_fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__my_fsm__DOT__next_state = 3U;
            }
        } else if ((3U == vlSelf->top__DOT__my_fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__my_fsm__DOT__next_state = 4U;
            }
        } else if ((4U == vlSelf->top__DOT__my_fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__my_fsm__DOT__next_state = 5U;
            }
        } else if ((5U == vlSelf->top__DOT__my_fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__my_fsm__DOT__next_state = 6U;
            }
        } else if ((6U == vlSelf->top__DOT__my_fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__my_fsm__DOT__next_state = 7U;
            }
        } else if (vlSelf->top__DOT__tick) {
            vlSelf->top__DOT__my_fsm__DOT__next_state = 8U;
        }
    } else if ((8U == vlSelf->top__DOT__my_fsm__DOT__current_state)) {
        if (vlSelf->top__DOT__tick) {
            vlSelf->top__DOT__my_fsm__DOT__next_state = 0U;
        }
    } else {
        vlSelf->top__DOT__my_fsm__DOT__next_state = 0U;
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG