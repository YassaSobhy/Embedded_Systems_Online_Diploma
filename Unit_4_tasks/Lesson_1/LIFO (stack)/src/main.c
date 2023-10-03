/*
 * main.c
 *
 *  Created on: Oct 2, 2023
 *      Author: yassa
 */


#include "LIFO.h"

#define buf_len 8

ele_type buffer[buf_len] ;

int main()
{
	ele_type i, temp = 0;
	LIFO_buf_t uart_lifo ;

	lifo_init(&uart_lifo, buffer, buf_len);

	//Add item
	printf("========LIFO creation========\n");
	for (i = 0; i < buf_len; i++)
	{
		if(lifo_add_buf(&uart_lifo, i) == lifo_no_error)
			printf("uart_add_lifo: %d\n", i);
	}

	//Get item
	printf("========reading your LIFO========\n");
	for(i = 0; i < buf_len; i++)
	{
		if(lifo_get_buf(&uart_lifo, &temp) == lifo_no_error)
			printf("uart_get_lifo: %d\n", temp);
	}

	return 0;
}
