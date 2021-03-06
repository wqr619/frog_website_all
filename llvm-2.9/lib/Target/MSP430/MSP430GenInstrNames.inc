//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Instruction Enum Values
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace MSP430 {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    PROLOG_LABEL	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    ADC16mi	= 14,
    ADC16mm	= 15,
    ADC16mr	= 16,
    ADC16ri	= 17,
    ADC16rm	= 18,
    ADC16rr	= 19,
    ADC8mi	= 20,
    ADC8mm	= 21,
    ADC8mr	= 22,
    ADC8ri	= 23,
    ADC8rm	= 24,
    ADC8rr	= 25,
    ADD16mi	= 26,
    ADD16mm	= 27,
    ADD16mr	= 28,
    ADD16ri	= 29,
    ADD16rm	= 30,
    ADD16rm_POST	= 31,
    ADD16rr	= 32,
    ADD8mi	= 33,
    ADD8mm	= 34,
    ADD8mr	= 35,
    ADD8ri	= 36,
    ADD8rm	= 37,
    ADD8rm_POST	= 38,
    ADD8rr	= 39,
    ADJCALLSTACKDOWN	= 40,
    ADJCALLSTACKUP	= 41,
    AND16mi	= 42,
    AND16mm	= 43,
    AND16mr	= 44,
    AND16ri	= 45,
    AND16rm	= 46,
    AND16rm_POST	= 47,
    AND16rr	= 48,
    AND8mi	= 49,
    AND8mm	= 50,
    AND8mr	= 51,
    AND8ri	= 52,
    AND8rm	= 53,
    AND8rm_POST	= 54,
    AND8rr	= 55,
    BIC16mm	= 56,
    BIC16mr	= 57,
    BIC16rm	= 58,
    BIC16rr	= 59,
    BIC8mm	= 60,
    BIC8mr	= 61,
    BIC8rm	= 62,
    BIC8rr	= 63,
    BIT16mi	= 64,
    BIT16mm	= 65,
    BIT16mr	= 66,
    BIT16ri	= 67,
    BIT16rm	= 68,
    BIT16rr	= 69,
    BIT8mi	= 70,
    BIT8mm	= 71,
    BIT8mr	= 72,
    BIT8ri	= 73,
    BIT8rm	= 74,
    BIT8rr	= 75,
    Bi	= 76,
    Bm	= 77,
    Br	= 78,
    CALLi	= 79,
    CALLm	= 80,
    CALLr	= 81,
    CMP16mi	= 82,
    CMP16mr	= 83,
    CMP16ri	= 84,
    CMP16rm	= 85,
    CMP16rr	= 86,
    CMP8mi	= 87,
    CMP8mr	= 88,
    CMP8ri	= 89,
    CMP8rm	= 90,
    CMP8rr	= 91,
    JCC	= 92,
    JMP	= 93,
    MOV16mi	= 94,
    MOV16mm	= 95,
    MOV16mr	= 96,
    MOV16ri	= 97,
    MOV16rm	= 98,
    MOV16rm_POST	= 99,
    MOV16rr	= 100,
    MOV8mi	= 101,
    MOV8mm	= 102,
    MOV8mr	= 103,
    MOV8ri	= 104,
    MOV8rm	= 105,
    MOV8rm_POST	= 106,
    MOV8rr	= 107,
    MOVZX16rm8	= 108,
    MOVZX16rr8	= 109,
    NOP	= 110,
    OR16mi	= 111,
    OR16mm	= 112,
    OR16mr	= 113,
    OR16ri	= 114,
    OR16rm	= 115,
    OR16rm_POST	= 116,
    OR16rr	= 117,
    OR8mi	= 118,
    OR8mm	= 119,
    OR8mr	= 120,
    OR8ri	= 121,
    OR8rm	= 122,
    OR8rm_POST	= 123,
    OR8rr	= 124,
    POP16r	= 125,
    PUSH16r	= 126,
    RET	= 127,
    RETI	= 128,
    SAR16r1	= 129,
    SAR16r1c	= 130,
    SAR8r1	= 131,
    SAR8r1c	= 132,
    SBC16mi	= 133,
    SBC16mm	= 134,
    SBC16mr	= 135,
    SBC16ri	= 136,
    SBC16rm	= 137,
    SBC16rr	= 138,
    SBC8mi	= 139,
    SBC8mm	= 140,
    SBC8mr	= 141,
    SBC8ri	= 142,
    SBC8rm	= 143,
    SBC8rr	= 144,
    SEXT16r	= 145,
    SHL16r1	= 146,
    SHL8r1	= 147,
    SUB16mi	= 148,
    SUB16mm	= 149,
    SUB16mr	= 150,
    SUB16ri	= 151,
    SUB16rm	= 152,
    SUB16rm_POST	= 153,
    SUB16rr	= 154,
    SUB8mi	= 155,
    SUB8mm	= 156,
    SUB8mr	= 157,
    SUB8ri	= 158,
    SUB8rm	= 159,
    SUB8rm_POST	= 160,
    SUB8rr	= 161,
    SWPB16r	= 162,
    Select16	= 163,
    Select8	= 164,
    Shl16	= 165,
    Shl8	= 166,
    Sra16	= 167,
    Sra8	= 168,
    Srl16	= 169,
    Srl8	= 170,
    XOR16mi	= 171,
    XOR16mm	= 172,
    XOR16mr	= 173,
    XOR16ri	= 174,
    XOR16rm	= 175,
    XOR16rm_POST	= 176,
    XOR16rr	= 177,
    XOR8mi	= 178,
    XOR8mm	= 179,
    XOR8mr	= 180,
    XOR8ri	= 181,
    XOR8rm	= 182,
    XOR8rm_POST	= 183,
    XOR8rr	= 184,
    ZEXT16r	= 185,
    INSTRUCTION_LIST_END = 186
  };
}
} // End llvm namespace 
