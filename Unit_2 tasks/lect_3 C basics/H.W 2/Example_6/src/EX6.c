/*
 ============================================================================
 Name        : EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	int sum = 0;
	int n = -1;
	int i;

	while (n <= 0)
	{
		printf("Enter an integer: ");
		fflush(stdout);
		scanf("%d", &n);
	}

	for (i = 0; i <= n; i++)
	{
		sum += i;
	}
	printf("sum = %d", sum);

	return 0;
}
