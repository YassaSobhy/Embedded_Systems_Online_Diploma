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
#define pi 3.141593
#define Area(r) (pi*(r)*(r))
int main(void)
{
	float rad;
	printf("Enter the radius: ");
	fflush(stdout);
	scanf("%f", &rad);

	printf("Area= %.2f\n", Area(rad));
	return (0);
}
