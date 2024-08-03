/*
 * lifo.h
 *
 *  Created on: Aug 3, 2024
 *      Author: DELL
 */

#ifndef LIFO_H_
#define LIFO_H_

typedef struct
{
	unsigned int length;
	unsigned int count;
	unsigned int * base;
	unsigned int * head;
}Lifo_Buf_t;

typedef enum {
	lifo_no_error,
	lifo_full,
	lifo_empty,
	lifo_null
}Lifo_Status;

Lifo_Status Lifo_Add_Item (Lifo_Buf_t * Lifo_Buf,unsigned int item);
Lifo_Status Lifo_Get_Item (Lifo_Buf_t * Lifo_Buf,unsigned int * item);
Lifo_Status Lifo_Init (Lifo_Buf_t * lifo_Buf,unsigned int * Buf,unsigned int length);


#endif /* LIFO_H_ */
