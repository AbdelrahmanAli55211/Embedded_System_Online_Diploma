/*
 * fifo.h
 *
 *  Created on: Aug 3, 2024
 *      Author: DELL
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"
//User Configurations
//Select element type
#define Element_Type uint8_t
//Create buffer
#define width1 5

Element_Type uart_buffer[width1];
//fifo datatypes
typedef struct
{
	uint32_t length;
	uint32_t count;
	Element_Type * base;
	Element_Type * head;
	Element_Type * tail;

}fifo_buf_t;

typedef enum
{
	fifo_no_error,
	fifo_null,
	fifo_empty,
	fifo_full
}fifo_buf_status;

fifo_buf_status fifo_init(fifo_buf_t * fifo,Element_Type * buf,uint32_t length);
fifo_buf_status fifo_enqueue(fifo_buf_t * fifo,Element_Type item);
fifo_buf_status fifo_dequeue(fifo_buf_t * fifo,Element_Type * item);
fifo_buf_status fifo_is_full(fifo_buf_t * fifo);
fifo_buf_status fifo_print(fifo_buf_t * fifo);





#endif /* FIFO_H_ */
