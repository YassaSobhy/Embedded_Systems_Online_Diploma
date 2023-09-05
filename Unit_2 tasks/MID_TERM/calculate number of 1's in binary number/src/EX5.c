/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int nums_bin(int num);

int main()
{
	int num;

	printf("Enter number: ");
	fflush(stdout);
	scanf("%d", &num);

	printf("number of ones in it -> %d", nums_bin(num));

	return 0;
}

int nums_bin(int num)
{
	int counts = 0;
	int i;

	for (i = 0; i < 32; i++)
	{
		if (num & 1 << i)
			counts++;
	}

	return counts;
}
