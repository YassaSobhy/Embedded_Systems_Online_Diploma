/*
 * LIFO.h
 *
 *  Created on: Oct 2, 2023
 *      Author: yassa
 */
#include <stdint.h>
#include <stdio.h>

#ifndef LIFO_H
#define LIFO_H



#define ele_type uint8_t


typedef struct {
	ele_type* base ;
	ele_type* head ;
	ele_type length ;
	ele_type count ;
}LIFO_buf_t;

//status
typedef enum {
	lifo_no_error , //0
	lifo_full , //1
	lifo_empty , //2
	lifo_null  //3
}LIFO_status_t;

//APIs

LIFO_status_t lifo_add_buf(LIFO_buf_t* lifo_buf, ele_type item);
LIFO_status_t lifo_get_buf(LIFO_buf_t* lifo_buf, ele_type* item);
LIFO_status_t lifo_init(LIFO_buf_t* lifo_buf, ele_type* buf, ele_type length);


#endif
