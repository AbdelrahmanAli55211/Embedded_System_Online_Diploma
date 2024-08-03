/*
 * main.c
 *
 *  Created on: Aug 3, 2024
 *      Author: DELL
 */
#include "fifo.h"

int main(void)
{
	fifo_buf_t fifo_uart;
	Element_Type i,temp;
	if(fifo_init(&fifo_uart,uart_buffer,5)==fifo_no_error)
	{
		printf("Fifo init is Done---------\n");
	}
	for(i=0;i<7;i++)
	{
		printf("Fifo Enqueue: (%x) \n",i);
		if(fifo_enqueue(&fifo_uart,i)==fifo_no_error)
		{
			printf("Fifo enqueue is Done\n");
		}
		else
		{
			printf("Fifo enqueue Failed\n");
		}
	}
	fifo_print(&fifo_uart);
	if(fifo_dequeue(&fifo_uart,&temp)==fifo_no_error)
		printf("Fifo dequeue is done (%x)\n",temp);
	if(fifo_dequeue(&fifo_uart,&temp)==fifo_no_error)
		printf("Fifo dequeue is done (%x)\n",temp);
	fifo_print(&fifo_uart);
	return 0;
}

