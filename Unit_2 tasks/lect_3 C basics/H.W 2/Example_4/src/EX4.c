/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float n;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f", &n);

	if ( n > 0)
		printf("%.2f is positive.\n", n);
	else if (n < 0)
		printf("%.2f is negative.\n", n);
	else if (n == 0)
		printf("enterd zero.\n");
	else
		printf("invalid input");

	return 0;
}
