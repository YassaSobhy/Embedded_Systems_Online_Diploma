/*
 * platform_types.h
 *
 *  Created on: Sep 15, 2023
 *      Author: yassa
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_
#include <stdint.h>

//CPU
#define CPU_TYPE CPU_TYPE_32
#define CPU_BIT_ORDER LSB_FIRST
#define CPU_BYTE_ORDER LOW_BYTE_FIRST

//boolean definition
#ifndef TRUE
#define TRUE	bol_true
#endif
#ifndef FALSE
#define FALSE	bol_false
#endif

//integer data
typedef volatile unsigned int	vuint32_t;
typedef volatile int	vint32_t;
typedef volatile long long vsint64_t;
typedef volatile unsigned long long	vuint64_t;
typedef volatile short	vsint16_t;
typedef volatile unsigned short vuint16_t;
typedef unsigned long long int	uint64_t;
typedef long long int	sin64_t;
typedef unsigned int	uint32;
typedef int	sint32_t;
typedef unsigned short int usint16_t;
typedef short int sint16_t;

//characters type

typedef volatile signed char vsint8_t;
typedef volatile unsigned char vuint8_t;
typedef unsigned char uint8_t;
typedef char char_t;
typedef signed char sint8_t;


#endif /* PLATFORM_TYPES_H_ */
