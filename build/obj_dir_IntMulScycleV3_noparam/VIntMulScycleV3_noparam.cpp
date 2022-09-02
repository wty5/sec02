// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV3_noparam.h for the primary calling header

#include "VIntMulScycleV3_noparam.h"
#include "VIntMulScycleV3_noparam__Syms.h"

#include "verilated_dpi.h"

//==========

void VIntMulScycleV3_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntMulScycleV3_noparam::eval\n"); );
    VIntMulScycleV3_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VIntMulScycleV3_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("imul/IntMulScycleV3.v", 111, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VIntMulScycleV3_noparam::_eval_initial_loop(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("imul/IntMulScycleV3.v", 111, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VIntMulScycleV3_noparam::__Vdpiexp_IntMulScycleV3_noparam__DOT__v__DOT__line_trace_TOP(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::__Vdpiexp_IntMulScycleV3_noparam__DOT__v__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val;
    CData/*0:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy;
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char;
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char;
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char;
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char;
    CData/*0:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__val;
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__char;
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__char;
    CData/*0:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__val;
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__char;
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__char;
    CData/*0:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val;
    CData/*0:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy;
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__char;
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__char;
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__char;
    CData/*7:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__char;
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num;
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num;
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num;
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num;
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__num;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__num;
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__num;
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__num;
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__num;
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__num;
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__num;
    WData/*4095:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__num;
    IData/*31:0*/ __Vilp;
    VIntMulScycleV3_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_SFORMAT_X(4096,vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__str
                 ,"%x|%x",32,(IData)((vlTOPp->istream_msg 
                                      >> 0x20U)),32,
                 (IData)(vlTOPp->istream_msg));
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[__Vilp] 
            = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy 
        = vlTOPp->istream_rdy;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val 
        = vlTOPp->istream_val;
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy) 
         & (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[__Vilp] 
                = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy) 
             & (~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val)))) {
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num 
                = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1;
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char = 0x20U;
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char);
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy)) 
                 & (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val))) {
                __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char = 0x20U;
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char);
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy)) 
                           & (~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val))))) {
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char = 0x20U;
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char);
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char = 0x20U;
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char);
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[0U] = 0x28U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_SFORMAT_X(4096,vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__str
                 ,"%x",32,vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__str[__Vilp] 
            = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__val 
        = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg;
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__val) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] 
                = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        if (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__10__val) {
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[0U] = 0x78U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__num 
                = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                   - (IData)(1U));
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__char = 0x20U;
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__13__char);
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__num 
                = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1;
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__char = 0x20U;
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__char);
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        }
    }
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[0U] = 0x20U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_SFORMAT_X(4096,vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__str
                 ,"%x",32,vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__str[__Vilp] 
            = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__val 
        = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg;
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__val) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[__Vilp] 
                = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        if (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__16__val) {
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[0U] = 0x78U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__num 
                = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                   - (IData)(1U));
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__char = 0x20U;
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__19__char);
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__num 
                = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1;
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__char = 0x20U;
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__char);
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        }
    }
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str[0U] = 0x29U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_SFORMAT_X(4096,vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__str
                 ,"%x",32,vlTOPp->ostream_msg);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__str[__Vilp] 
            = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy 
        = vlTOPp->ostream_rdy;
    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val 
        = vlTOPp->ostream_val;
    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy) 
         & (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str[__Vilp] 
                = __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy) 
             & (~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val)))) {
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__num 
                = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1;
            __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__char = 0x20U;
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__24__char);
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy)) 
                 & (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val))) {
                __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__num 
                    = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__char = 0x20U;
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__26__char);
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__rdy)) 
                           & (~ (IData)(__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__22__val))))) {
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__27__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__num 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__char = 0x20U;
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__28__char);
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_str__29__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__num 
                        = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__char = 0x20U;
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__30__char);
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VIntMulScycleV3_noparam::line_trace(svBitVecVal* trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::line_trace\n"); );
    // Variables
    WData/*4095:0*/ trace_str__Vcvt[128];
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum==-1)) { __Vfuncnum = Verilated::exportFuncNum("line_trace"); }
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VIntMulScycleV3_noparam__Vcb_line_trace_t __Vcb = (VIntMulScycleV3_noparam__Vcb_line_trace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVBV(4096,trace_str__Vcvt,trace_str);(*__Vcb)((VIntMulScycleV3_noparam__Syms*)(__Vscopep->symsp()), trace_str__Vcvt);
    VL_SET_SVBV_W(4096, trace_str, trace_str__Vcvt);
}

VL_INLINE_OPT void VIntMulScycleV3_noparam::_combo__TOP__1(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::_combo__TOP__1\n"); );
    VIntMulScycleV3_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->istream_rdy = vlTOPp->ostream_rdy;
}

VL_INLINE_OPT void VIntMulScycleV3_noparam::_sequent__TOP__3(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::_sequent__TOP__3\n"); );
    VIntMulScycleV3_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg = 0U;
    } else {
        if (vlTOPp->ostream_rdy) {
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg 
                = vlTOPp->istream_val;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg = 0U;
    } else {
        if (vlTOPp->ostream_rdy) {
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg 
                = (IData)(vlTOPp->istream_msg);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg = 0U;
    } else {
        if (vlTOPp->ostream_rdy) {
            vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg 
                = (IData)((vlTOPp->istream_msg >> 0x20U));
        }
    }
    vlTOPp->ostream_val = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg;
    vlTOPp->ostream_msg = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg 
                           * vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg);
}

void VIntMulScycleV3_noparam::_eval(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::_eval\n"); );
    VIntMulScycleV3_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VIntMulScycleV3_noparam::_change_request(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::_change_request\n"); );
    VIntMulScycleV3_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VIntMulScycleV3_noparam::_change_request_1(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::_change_request_1\n"); );
    VIntMulScycleV3_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VIntMulScycleV3_noparam::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((istream_val & 0xfeU))) {
        Verilated::overWidthError("istream_val");}
    if (VL_UNLIKELY((ostream_rdy & 0xfeU))) {
        Verilated::overWidthError("ostream_rdy");}
}
#endif  // VL_DEBUG
