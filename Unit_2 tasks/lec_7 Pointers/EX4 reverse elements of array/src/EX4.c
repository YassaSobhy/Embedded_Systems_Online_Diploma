/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[15];
	int* ptr = arr;
	int i, n;

	printf("Enter the number of elements in range 15 max:");
	fflush(stdout);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("element - %d:", i+1);
		fflush(stdout);
		scanf("%d", (ptr+i));
	}
	printf("\n\nThe elements of array in reverse order are :\n");
	for (i = n-1; i >= 0; i--)
	{
		printf("element - %d :%d\n", i+1, *(ptr + i));
	}


	return 0;
}
