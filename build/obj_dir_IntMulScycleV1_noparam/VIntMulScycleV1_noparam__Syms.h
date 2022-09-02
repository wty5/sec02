// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VINTMULSCYCLEV1_NOPARAM__SYMS_H_
#define _VINTMULSCYCLEV1_NOPARAM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VIntMulScycleV1_noparam.h"

// DPI TYPES for DPI Export callbacks (Internal use)
typedef void (*VIntMulScycleV1_noparam__Vcb_line_trace_t) (VIntMulScycleV1_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);

// SYMS CLASS
class VIntMulScycleV1_noparam__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VIntMulScycleV1_noparam*       TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_IntMulScycleV1_noparam__v;
    
    // CREATORS
    VIntMulScycleV1_noparam__Syms(VIntMulScycleV1_noparam* topp, const char* namep);
    ~VIntMulScycleV1_noparam__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
