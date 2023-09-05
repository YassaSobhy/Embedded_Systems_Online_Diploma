/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

void revers(int num);

#include <stdio.h>

int main()
{
	int num;

	printf("Enter a number please: ");
	fflush(stdout);
	scanf("%d", &num);

	revers(num);



	return 0;
}

void revers(int num)
{
	int rev;
	printf("digits reverse: ");
	while (num != 0)
	{
		rev = num % 10;
		printf("%d", rev);
		num = num / 10;
	}
}
