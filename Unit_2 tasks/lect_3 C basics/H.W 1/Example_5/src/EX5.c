/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char c;

	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);

	printf("ASCII value of G = %d", c);

	return 0;
}
