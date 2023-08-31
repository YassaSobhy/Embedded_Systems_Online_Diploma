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

int main()
{
	float arr[100], sum = 0;
	int i, n;

	printf("Enter the numbers of data: ");
	fflush(stdout);
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("%d. Enter number: ", i + 1);
		fflush(stdout);
		scanf("%f", &arr[i]);
		sum += arr[i];
	}
	printf("Average = %.2f\n", sum/n);

	return 0;
}
