/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int sum_digits(int num);

int main()
{
	int num;

	printf("input: ");
	fflush(stdout);
	scanf("%d", &num);
	printf(" -> ");
	int x = sum_digits(num);
	printf("output: %d", x);

	return 0;
}

int sum_digits(int num)
{
	int coll = 0;
	int mod;

	while(num != 0)
	{
		mod = num % 10;
		coll += mod;
		num = num / 10;
	}
	return (coll);
}
