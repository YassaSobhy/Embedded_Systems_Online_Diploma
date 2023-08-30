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

int main()
{
	int num;

	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d", &num);

	if (num %2 == 0)
	{
		printf("%d is even.\n", num);
	}
	else
	{
		printf("%d is odd.\n", num);
	}

	return 0;
}
