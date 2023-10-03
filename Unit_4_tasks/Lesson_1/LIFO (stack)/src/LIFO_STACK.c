/*
 ============================================================================
 Name        : LIFO_STACK.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "LIFO.h"

LIFO_status_t lifo_add_buf(LIFO_buf_t* lifo_buf, ele_type item)
{
	//check if lifo valid
	if(!lifo_buf-> base || !lifo_buf-> head)
		return lifo_null ;

	//check if full
	if(lifo_buf -> count == lifo_buf -> length)
		return lifo_full ;
	//add item
	*(lifo_buf -> head) = item ;
	lifo_buf -> head++ ;
	lifo_buf -> count++ ;

	return lifo_no_error ;
}

LIFO_status_t lifo_get_buf(LIFO_buf_t* lifo_buf, ele_type* item)
{
	//check if lifo valid
	if(!lifo_buf-> base || !lifo_buf-> head)
		return lifo_null ;
	//check if empty
	if(lifo_buf -> count == 0)
		return lifo_empty ;

	//get item
	lifo_buf -> head-- ;
	*item = *(lifo_buf -> head) ;
	lifo_buf -> count-- ;

	return lifo_no_error ;
}

LIFO_status_t lifo_init(LIFO_buf_t* lifo_buf, ele_type* buf, ele_type length)
{
	if(buf == NULL)
		return lifo_null ;
	lifo_buf -> base = buf ;
	lifo_buf -> head = buf ;
	lifo_buf -> length = length ;
	lifo_buf -> count = 0 ;
	return lifo_no_error ;
}
