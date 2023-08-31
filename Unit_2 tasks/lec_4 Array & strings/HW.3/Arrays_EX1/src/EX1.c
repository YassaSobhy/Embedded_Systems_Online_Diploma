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
	float a[2][2];
	float b[2][2];
	int i, j;

	printf("Enter the elements of 1st matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter b%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%f", &b[i][j]);
		}
	}
	printf("Sum Of Matrix: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (j == 1)
				printf("%.1f", (a[i][j] + b[i][j]));
			else
				printf("%.1f\t", (a[i][j] + b[i][j]));
		}
		printf("\n");
	}

	return 0;
}
