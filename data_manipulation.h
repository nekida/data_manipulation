#ifndef __DATA_MANIPULATION
#define __DATA_MANIPULATION

#if defined   (__CC_ARM)
    #define REVERSE_8_BITS(data) 		 (__rbit((uint32_t)data) >> 24)
    #define REVERSE_16_BITS(data)		 (__rbit((uint32_t)data) >> 16)
    #define REVERSE_32_BITS(data)		 (__rbit((uint32_t)data))
    #define REVERSE_BYTES_IN_WORD(data)  (__rev(data))
#elif defined (__ICCARM__)
    #define REVERSE_8_BITS(data) 		(__RBIT((uint32_t)data) >> 24)
    #define REVERSE_16_BITS(data)		(__RBIT((uint32_t)data) >> 16)
    #define REVERSE_32_BITS(data)		(__RBIT((uint32_t)data))
    #define REVERSE_BYTES_IN_WORD(data)	(__REV(data))
#endif
#define REVERSE_BYTES_IN_HALFWORD(data)	(__REV16(data))

#endif
