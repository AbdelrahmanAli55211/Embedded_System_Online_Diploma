/*
 * main.c
 *
 *  Created on: Aug 3, 2024
 *      Author: DELL
 */

#include "lifo.h"
#include "stdio.h"
#include "stdlib.h"
unsigned int buffer1[5];

void main(void)
{
	Lifo_Buf_t Uart_Lifo;
	Lifo_Buf_t I2c_Lifo;
	unsigned int i,temp=0;
	Lifo_Init(&Uart_Lifo,buffer1,5);
	unsigned int * buffer2=(unsigned int *) malloc(5*sizeof(unsigned int ));
	Lifo_Init(&I2c_Lifo,buffer2,5);
	for(i=0;i<5;i++)
	{
		Lifo_Add_Item(&Uart_Lifo,i);
		printf("Uart Lifo add: %d\n",i);
	}
	printf("=============\n");
	for(i=0;i<5;i++)
	{
		Lifo_Get_Item(&Uart_Lifo,&temp);
		printf("Uart Lifo get: %d\n",temp);
	}
}
