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
	int a[15][15], tr[15][15];
	int i, j, c, r;

	printf("Enter rows and column of matrix: ");
	fflush(stdout);
	scanf("%d\n%d", &r, &c);

	printf("Enter elements of matrix:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter elements a%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%d", &a[i][j]);
		}
	}

	printf("Entered Matrix:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (j == (c - 1)){
				printf("%d", a[i][j]);
				printf("\n");
			}
			else
				printf("%d\t", a[i][j]);
		}
	}
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			tr[j][i] = a[i][j];
		}

	}
	printf("Transpose of Matrix:\n");
	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			if (j == (r - 1)){
				printf("%d", tr[i][j]);
				printf("\n");
			}
			else
				printf("%d\t", tr[i][j]);
		}

	}

	return 0;
}
