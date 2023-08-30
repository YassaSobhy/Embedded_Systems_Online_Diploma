/*
 ============================================================================
 Name        : EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a, b;

	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f", &b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter swapping, value of a = %0.2f\n", a);
	printf("After swapping, value of b = %0.1f", b);

	return 0;
}
