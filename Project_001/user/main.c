#include "stm32f4xx.h"                  // Device header
int main (void)
{
	RCC->AHB1ENR |=  RCC_AHB1ENR_GPIODEN; //������� ������������ �����
	GPIOD->MODER = 0x40000000; // ������� ����� 15 �� �����
	GPIOD->OTYPER = 0; //������� ������������� ���������� �� ���� ����
	GPIOD->OSPEEDR = 0; // �������� �������� LowSpeed �� ��� ����� �����
	GPIOD->ODR = 0X8000; // ������ ��������� ������������ � ����� 15 ����� D
	while (1)
	//�������
	{
	
	}
	
}
