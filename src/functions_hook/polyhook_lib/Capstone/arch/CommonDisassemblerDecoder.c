#include "CommonDisassemblerDecoder.h"
#if defined(CAPSTONE_HAS_ARM64)
#define NO_DISASSEMBLER_DECODER_ARM64
#elif defined(CAPSTONE_HAS_ARM)
#define NO_DISASSEMBLER_DECODER_ARM
#elif defined(CAPSTONE_HAS_MIPS)
#define NO_DISASSEMBLER_DECODER_MIPS
#elif defined(CAPSTONE_HAS_POWERPC)
#define NO_DISASSEMBLER_DECODER_POWERPC
#elif defined(CAPSTONE_HAS_SPARC)
#define NO_DISASSEMBLER_DECODER_SPARC
#elif defined(CAPSTONE_HAS_SYSZ)
#define NO_DISASSEMBLER_DECODER_SYSZ
#elif defined(CAPSTONE_HAS_X86)
#include "X86/X86DisassemblerDecoder.c"
#elif defined(CAPSTONE_HAS_XCORE)
#define NO_DISASSEMBLER_DECODER_XCORE
#endif