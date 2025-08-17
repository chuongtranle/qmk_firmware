#pragma once

#include_next <board.h>

#undef STM32_HSECLK
#define STM32_HSECLK 8000000

#undef VAL_GPIOCCRH
#define VAL_GPIOCCRH 0x88888888


#undef VAL_GPIOBCRH
#define VAL_GPIOBCRH 0x88888888
