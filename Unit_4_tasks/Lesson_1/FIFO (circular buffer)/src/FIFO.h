/*
 * FIFO.h
 *
 *  Created on: Oct 2, 2023
 *      Author: yassa
 */
#ifndef FIFO_H
#define FIFO_H
#include <stdint.h>
#include <stdio.h>

#define ele_type uint8_t

//FIFO structure
typedef struct {
	ele_type* base;
	ele_type* head;
	ele_type* tail;
	unsigned int length;
	unsigned int count;
}FIFO_buf_t;

//FIFO status
typedef enum
{
	fifo_no_error, //0
	fifo_full,     //1
	fifo_empty,    //2
	fifo_null      //3
}FIFO_status;

//FIFO APIs
FIFO_status fifo_init(FIFO_buf_t* fifo_buf, ele_type* buf, unsigned int buffer_length);
FIFO_status fifo_enqueue(FIFO_buf_t* fifo_buf, ele_type item);
FIFO_status fifo_dequeue(FIFO_buf_t* fifo_buf, ele_type* item);
FIFO_status fifo_is_full(FIFO_buf_t* fifo_buf);
void fifo_print(FIFO_buf_t* fifo_buf);

#endif
