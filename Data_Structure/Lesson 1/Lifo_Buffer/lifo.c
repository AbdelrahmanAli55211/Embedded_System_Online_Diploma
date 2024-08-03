/*
 * lifo.c
 *
 *  Created on: Aug 3, 2024
 *      Author: DELL
 */
#include "lifo.h"
#include "stdio.h"
#include "stdlib.h"

Lifo_Status Lifo_Add_Item (Lifo_Buf_t * Lifo_Buf,unsigned int item)
{
	//check lifo is valid
	if(!Lifo_Buf->base || !Lifo_Buf->head)
	{
		return lifo_null;
	}

	//check lifo is full
	if(Lifo_Buf->count == Lifo_Buf->length)
	{
		return lifo_full;
	}
	*(Lifo_Buf->head)=item;
	Lifo_Buf->head++;
	Lifo_Buf->count++;
	return lifo_no_error;
}

Lifo_Status Lifo_Get_Item (Lifo_Buf_t * Lifo_Buf,unsigned int * item)
{
	//check lifo is valid
	if(!Lifo_Buf->base || !Lifo_Buf->head)
	{
		return lifo_null;
	}
	//check lifo is empty
	if(Lifo_Buf->count==0)
	{
		return lifo_empty;
	}
	Lifo_Buf->head--;
	*item=*Lifo_Buf->head;
	Lifo_Buf->count--;
	return lifo_no_error;
}

Lifo_Status Lifo_Init (Lifo_Buf_t * lifo_Buf,unsigned int * Buf,unsigned int length)
{
	if(Buf==NULL)
	{
		return lifo_null;
	}
	else
	{
		lifo_Buf -> base = Buf;
		lifo_Buf -> head = Buf;
		lifo_Buf -> length = length;
		lifo_Buf -> count = 0;
	}
	return lifo_no_error;
}
