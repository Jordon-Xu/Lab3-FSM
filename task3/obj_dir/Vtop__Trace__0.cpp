// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgBit(oldp+2,(vlSelf->en));
    bufp->chgCData(oldp+3,(vlSelf->data_out),8);
    bufp->chgBit(oldp+4,(vlSelf->top__DOT__tick));
    bufp->chgSData(oldp+5,(vlSelf->top__DOT__my_clktick__DOT__count),16);
    bufp->chgCData(oldp+6,((((((((((0U == vlSelf->top__DOT__my_fsm__DOT__current_state) 
                                   | (1U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                                  | (2U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                                 | (3U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                                | (4U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                               | (5U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                              | (6U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                             | (7U == vlSelf->top__DOT__my_fsm__DOT__current_state))
                             ? ((0U == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                 ? 0U : ((1U == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                          ? 1U : ((2U 
                                                   == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                                   ? 3U
                                                   : 
                                                  ((3U 
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
                                 ? 0xffU : 0U))),8);
    bufp->chgIData(oldp+7,(vlSelf->top__DOT__my_fsm__DOT__current_state),32);
    bufp->chgIData(oldp+8,(vlSelf->top__DOT__my_fsm__DOT__next_state),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
