/******************************************************************/
/* Author	: Ahmed Salah										  */
/* Date		: 22 Aug 2020										  */
/* Version	: V01												  */
/******************************************************************/
#ifndef SCB_PRIVATE_H
#define SCB_PRIVATE_H

/*
*********************************************************************************************************
*                                          	GLOBAL VARIABLES
*********************************************************************************************************
*/
volatile u8 Global_u8Interrupt_SW_Grouping = 0;


/*
*********************************************************************************************************
*                                           	MACROS
*********************************************************************************************************
*/
//SCB REGISTERS
#define SCB_AIRCR		(*((volatile u32*)(0xE000ED0C)))	/* Controls Priority Groups and Sub Priority */


#endif
//***************************************************************************************************************


