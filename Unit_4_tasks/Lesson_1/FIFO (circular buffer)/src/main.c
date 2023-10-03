/*
 * main.c
 *
 *  Created on: Oct 2, 2023
 *      Author: yassa
 */

#include "FIFO.h"

#define buf_len 5
ele_type buffer[buf_len];

int main()
{
	ele_type i, temp = 0;
	FIFO_buf_t uart_fifo;
	if (fifo_init(&uart_fifo, buffer, buf_len) == fifo_no_error)
		printf("========FIFO init done========\n");

	for (i = 0; i < 7; i++)
	{
		printf("FIFO enqueue (%x) \n", i);

		if (fifo_enqueue(&uart_fifo, i) == fifo_no_error)
			printf("FIFO enqueue (%x) ----Done\n", i);
		else
			printf("FIFO enqueue (%x)----Failed\n", i);
	}
	fifo_print(&uart_fifo);

	if (fifo_dequeue(&uart_fifo, &temp)== fifo_no_error)
		printf("FIFO dequeue (%x)----Done\n", temp);

	if (fifo_dequeue(&uart_fifo, &temp)== fifo_no_error)
			printf("FIFO dequeue (%x)----Done\n", temp);

	fifo_print(&uart_fifo);


	return 0;
}
