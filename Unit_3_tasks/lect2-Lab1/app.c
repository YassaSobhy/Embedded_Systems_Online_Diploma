#include "uart.h"

unsigned char str[100] = "learn-in-depth:<Yassa>";

void main()
{
	Uart_Send_String(str);
}