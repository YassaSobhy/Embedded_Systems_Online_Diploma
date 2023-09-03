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

int fact(int num);

int main()
{
	int num;

	while(1)
	{
		printf("Enter an positive integer: ");
		fflush(stdout); fflush(stdin);
		scanf("%d", &num);
		if (num >= 0)
			break;
	}
	printf("Factorial of %d = %d", num, fact(num));


	return 0;
}

int fact(int num)
{
	if (num == 0)
		return 1;
	else if (num == 1)
		return 1;
	else
		return (num * fact(num -1));

}
