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

int power(int x, int y);

int main()
{
	int base, pw;

	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d", &base);
	printf("Enter power number(positive integer): ");
	fflush(stdout);
	scanf("%d", &pw);
	printf("%d^%d = %d\n",base, pw, power(base, pw));


	return 0;
}

int power(int x, int y)
{
	if ( y == 0)
		return 1;
	else
		return (x * power(x, y-1));
}
