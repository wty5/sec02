// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV1_noparam.h for the primary calling header

#include "VIntMulScycleV1_noparam.h"
#include "VIntMulScycleV1_noparam__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VIntMulScycleV1_noparam) {
    VIntMulScycleV1_noparam__Syms* __restrict vlSymsp = __VlSymsp = new VIntMulScycleV1_noparam__Syms(this, name());
    VIntMulScycleV1_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VIntMulScycleV1_noparam::__Vconfigure(VIntMulScycleV1_noparam__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VIntMulScycleV1_noparam::~VIntMulScycleV1_noparam() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VIntMulScycleV1_noparam::_settle__TOP__2(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam::_settle__TOP__2\n"); );
    VIntMulScycleV1_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = (vlTOPp->IntMulScycleV1_noparam__DOT__v__DOT__in0_reg 
                   * vlTOPp->IntMulScycleV1_noparam__DOT__v__DOT__in1_reg);
}

void VIntMulScycleV1_noparam::_eval_initial(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam::_eval_initial\n"); );
    VIntMulScycleV1_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VIntMulScycleV1_noparam::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam::final\n"); );
    // Variables
    VIntMulScycleV1_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIntMulScycleV1_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntMulScycleV1_noparam::_eval_settle(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam::_eval_settle\n"); );
    VIntMulScycleV1_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VIntMulScycleV1_noparam::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV1_noparam::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    in0 = VL_RAND_RESET_I(32);
    in1 = VL_RAND_RESET_I(32);
    out = VL_RAND_RESET_I(32);
    reset = VL_RAND_RESET_I(1);
    IntMulScycleV1_noparam__DOT__v__DOT__in0_reg = VL_RAND_RESET_I(32);
    IntMulScycleV1_noparam__DOT__v__DOT__in1_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, IntMulScycleV1_noparam__DOT__v__DOT__str);
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
}
