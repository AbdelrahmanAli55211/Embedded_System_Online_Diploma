/*
 * fifo.c
 *
 *  Created on: Aug 3, 2024
 *      Author: DELL
 */

#include "fifo.h"

fifo_buf_status fifo_init(fifo_buf_t * fifo,Element_Type * buf,uint32_t length)
{
	if(buf==NULL)
	{
		return fifo_null;
	}
	fifo->base=buf;
	fifo->head=buf;
	fifo->tail=buf;
	fifo->count=0;
	fifo->length=length;
	return fifo_no_error;
}
fifo_buf_status fifo_enqueue(fifo_buf_t * fifo,Element_Type item)
{
	if(!fifo->base||!fifo->head||!fifo->tail)
		return fifo_null;
	if(fifo_is_full(fifo)==fifo_full)
		return fifo_full;
	*fifo->head=item;
	fifo->count++;
	if(fifo->head==(fifo->base)+(fifo->length)*sizeof(Element_Type))
		fifo->head=fifo->base;
	else
		fifo->head++;
	return fifo_no_error;
}
fifo_buf_status fifo_dequeue(fifo_buf_t * fifo,Element_Type * item)
{
	if(!fifo->base||!fifo->head||!fifo->tail)
		return fifo_null;
	if(fifo->count==0)
		return fifo_empty;
	*item=*fifo->tail;
	fifo->count--;
	if(fifo->tail==(fifo->base)+(fifo->length)*sizeof(Element_Type))
		fifo->tail=fifo->base;
	else
		fifo->tail++;
	return fifo_no_error;

}
fifo_buf_status fifo_is_full(fifo_buf_t * fifo)
{
	if(!fifo->base||!fifo->head||!fifo->tail)
		return fifo_null;
	if(fifo->length==fifo->count)
		return fifo_full;

	return fifo_no_error;
}
fifo_buf_status fifo_print(fifo_buf_t * fifo)
{
	Element_Type * temp;
	uint32_t i;
	if(fifo->count==0)
	{
		printf("Fifo is empty\n");
		return fifo_empty;
	}
	else
	{
		temp=fifo->tail;
		printf("======FIFO PRINT======\n");
		for(i=0;i<fifo->count;i++)
		{
			printf("\t%x\n",*temp);
			temp++;
		}
		printf("======\n");
	}
	return fifo_no_error;
}
