/*
		PLL_M      8
		PLL_Q      4
		PLL_N      336
		PLL_P      2
		HSE        8000000
		
*/

#include "stm32f4xx.h"                  // Device header
#include "delay.h"

int main()
{
	
	RCC->AHB1ENR|=0x08;
	GPIOD->MODER|=(0x55000000);
	
	while(1)
	{
			GPIOD->ODR^=15<<12; //All Pin, 15 = 0x1111 
			delay_ms(1000);
	}

}