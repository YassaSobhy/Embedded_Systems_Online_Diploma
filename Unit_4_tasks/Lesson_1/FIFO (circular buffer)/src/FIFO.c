/*
 ============================================================================
 Name        : FIFO.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "FIFO.h"

FIFO_status fifo_init(FIFO_buf_t* fifo_buf, ele_type* buf, unsigned int buffer_length)
{
	if (buf == NULL)
		return fifo_null;

	fifo_buf -> base = buf;
	fifo_buf -> head = buf;
	fifo_buf -> tail = buf;
	fifo_buf -> length = buffer_length;
	fifo_buf -> count = 0;

	return 0;
}

FIFO_status fifo_enqueue(FIFO_buf_t* fifo_buf, ele_type item)
{
	//check if FIFO is valid
	if(!fifo_buf -> base || !fifo_buf -> head || !fifo_buf -> tail)
		return fifo_null;

	//check if FIFO is full
	if(fifo_is_full(fifo_buf) == fifo_full)
		return fifo_full;

	//enqueue
	*(fifo_buf -> head) = item;
	fifo_buf -> count++;

	//achieve circular fifo
	if (fifo_buf -> head == (fifo_buf -> base + (fifo_buf -> length * sizeof(ele_type))))
		fifo_buf -> head = fifo_buf -> base;
	else
		fifo_buf -> head++;
	return fifo_no_error;
}

FIFO_status fifo_dequeue(FIFO_buf_t* fifo_buf, ele_type* item)
{
	//check if FIFO is valid
	if(!fifo_buf -> base || !fifo_buf -> head || !fifo_buf -> tail)
		return fifo_null;

	//cheak empty
	if (fifo_buf -> count == 0)
		return fifo_empty;

	//dequeue
	*item = *(fifo_buf -> tail);
	fifo_buf -> count--;

	//achieve circular for tail
	if (fifo_buf -> tail == (fifo_buf -> base + (fifo_buf -> length * sizeof(ele_type))))
		fifo_buf -> tail = fifo_buf -> base;
	else
		fifo_buf -> tail++;

	return fifo_no_error;
}

FIFO_status fifo_is_full(FIFO_buf_t* fifo_buf)
{
	//check if FIFO is valid
	if(!fifo_buf -> base || !fifo_buf -> head || !fifo_buf -> tail)
		return fifo_null;

	//check if FIFO is full
	if(fifo_buf -> count == fifo_buf -> length)
		return fifo_full;
	else
		return fifo_no_error;
}

void fifo_print(FIFO_buf_t* fifo_buf)
{
	ele_type* temp;
	int i;
	if (fifo_buf -> count == 0)
		printf("FIFO is empty.\n");
	else
	{
		temp = fifo_buf -> tail;
		printf("========FIFO printing========\n");
		for (i = 0; i < fifo_buf -> count; i++)
		{
			printf("\t %X \n", *temp);
			temp++;
		}
	}
	printf("===================================\n");
}
