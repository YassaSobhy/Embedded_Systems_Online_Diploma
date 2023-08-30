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
	float k, l;

	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f\n%f", &k, &l);

	printf("Product: %f", k*l);

	return 0;

}
