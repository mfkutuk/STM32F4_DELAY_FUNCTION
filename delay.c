#include "delay.h"

uint32_t SysTickCounter;

void SysTick_Handler()
{

	if(SysTickCounter!=0x00)
		{
			SysTickCounter--;
		}
}

void delay_ms(uint32_t delay)
{
	//SetClock();
	SysTick_Config(SystemCoreClock/1000);
	SysTickCounter=delay;
	while(SysTickCounter!=0){}
}

void delay_s(uint32_t delay)
{
	//SetClock();
	SysTick_Config(SystemCoreClock/1000);
	SysTickCounter=delay*1000;
	while(SysTickCounter!=0){}
}

