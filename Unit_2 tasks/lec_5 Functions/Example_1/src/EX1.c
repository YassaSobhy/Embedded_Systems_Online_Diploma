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

int check_prime(int num);

int main()
{
	int a, b, i;


	printf("Enter two numbers(intervals): ");
	fflush(stdout); fflush(stdin);
	scanf("%d\n%d", &a, &b);

	printf("Prime numbers between %d and %d are: ", a, b);
	for (i = (a + 1); i < b; i++)
	{
		if (check_prime(i) == 0)
			printf("%d ", i);
	}

	return 0;
}

int check_prime(int num)
{
	int i, flag = 0;

	for (i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
		{
			flag = 1;
			break;
		}
	}
	return flag;
}
