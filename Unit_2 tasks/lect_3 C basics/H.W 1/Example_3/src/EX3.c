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

int main()
{
	int k,l;

	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d\n%d", &k, &l);

	printf("Sum: %d", k + l);

	return 0;
}
