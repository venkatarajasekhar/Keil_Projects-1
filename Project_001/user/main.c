#include "stm32f4xx.h"                  // Device header
int main (void)
{
	RCC->AHB1ENR |=  RCC_AHB1ENR_GPIODEN; //¬ключим тактирование порта
	GPIOD->MODER = 0x40000000; // включим ножку 15 на выход
	GPIOD->OTYPER = 0; //включим подт€гивающее напр€жение на весь порт
	GPIOD->OSPEEDR = 0; // выставим скорость LowSpeed на все лапки порта
	GPIOD->ODR = 0X8000; // зажжем светодиод подключенный к лапке 15 порта D
	while (1)
		
	
	{
	
	}
	
}
