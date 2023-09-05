/*
 ============================================================================
 Name        : EX8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void rev_ele(int arr[], int n);

int main()
{
	int arr[] = {1,2,3,4,5};
	int n;
	n = sizeof(arr) / sizeof(arr[0]);

	rev_ele(arr, n);

	return 0;
}

void rev_ele(int arr[], int n)
{
	int i;
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);

	}
}
