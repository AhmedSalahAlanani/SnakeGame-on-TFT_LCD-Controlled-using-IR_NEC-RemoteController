/*
 * main.c
 *
 *  Created on: Sep 26, 2020
 *      Author: Ahmed Salah
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "SnakeGame_interface.h"


void main (void)
{
	MRCC_voidInitSysClock ();
	MRCC_voidEnableClock  (RCC_APB2,RCC_APB2_IOPAEN);
	MRCC_voidEnableClock  (RCC_APB2,RCC_APB2_IOPBEN);
	MRCC_voidEnableClock  (RCC_APB2,RCC_APB2_AFIOEN);
	MRCC_voidEnableClock  (RCC_APB1,RCC_APB1_TIM2EN);
	MRCC_voidEnableClock  (RCC_APB1,RCC_APB1_TIM3EN);
	MRCC_voidEnableClock  (RCC_APB2,RCC_APB2_SPI1EN);


	/*Start the Application*/
	StartSnakeGame();
}
