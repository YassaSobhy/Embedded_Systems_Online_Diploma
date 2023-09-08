/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

struct data{
	float real;
	float img;
};

int main(void)
{
	struct data n1, n2, sum;

	printf("For 1st complex number\n\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f%f", &n1.real, &n1.img);
	printf("\nFor 2nd complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f%f", &n2.real, &n2.img);

	sum.real = n1.real + n2.real;
	sum.img = n1.img + n2.img;

	printf("sum=%.1f+%.1fi\n", sum.real, sum.img);

	return (0);
}
