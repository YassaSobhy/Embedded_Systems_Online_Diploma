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
	int n = -1;
	int fact = 1;
	int i;

	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &n);

	if ( n < 0)
		printf("Error!!! Factorial of negative number doesn't exist.");
	else
	{
		for (i = 1; i <= n; i++)
			{
				fact *= i;
			}

			printf("Factorial = %d", fact);
	}




	return 0;
}
