# data_manipulation
Include-файл с макросами на ассемблерные инструкции для разных компиляторов (Keil, IAR и др) для изменения порядка битов или байтов.


REVERSE_8_BITS() - меняет местами биты в одном байте: 0b10101010 -> REVERSE_8_BITS -> 0b01010101.


REVERSE_16_BITS() - меняет местами биты в двух байтах: 0b10101010_01010101 -> REVERSE_16_BITS -> 0b01010101_10101010.


REVERSE_32_BITS() - меняет местами биты в четырех байтах: 0b10101010_01010101 -> REVERSE_32_BITS -> 0b01010101_10101010.


REVERSE_BYTES_IN_WORD() - меняет местами байты в 32-битном слове: 0x11223344 -> REVERSE_BYTES_IN_WORD -> 0x44332211.


REVERSE_BYTES_IN_HALFWORD() - меняет местами байты в каждом полуслове 32-битного слове: 0x11223344 -> REVERSE_BYTES_IN_HALFWORD -> 0x22114433.
