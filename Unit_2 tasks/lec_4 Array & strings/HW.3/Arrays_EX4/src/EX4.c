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

int main()
{
	int a[20], i, nums, value, position;

	printf("Enter no of elements : ");
	fflush(stdout);
	scanf("%d", &nums);

	for (i = 0; i < nums; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("\nEnter the element to be inserted: ");
	fflush(stdout);
	scanf("%d", &value);

	printf("\nEnter the location: ");
	fflush(stdout);
	scanf("%d", &position);

	for (i = nums; i >= position; i--)
	{
		a[i] = a[i - 1];
	}

	nums++;

	a[position - 1] = value;


	for (i = 0; i < nums; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
