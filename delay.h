#ifndef __DELAY_H
#define __DELAY_H

#include "stm32f4xx.h"
#include "stdint.h"

extern uint32_t SysTickCounter;
void delay_ms(uint32_t);
void delay_s(uint32_t);



#endif