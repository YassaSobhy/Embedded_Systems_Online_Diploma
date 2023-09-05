/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

double square_root(double num);

int main()
{
	int num;

	printf("square root of: ");
	fflush(stdout);
	scanf("%d", &num);


	if (num < 0)
		printf("invalid input!!");
	else{
		double res = square_root(num);
		printf("the result is: %.3lf\n", res);}


	return 0;
}

double square_root(double num)
{

	return sqrt(num);
}
