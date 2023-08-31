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
int main()
{
	int a[20], i, nums, value;

		printf("Enter no of elements : ");
		fflush(stdout);
		scanf("%d", &nums);

		for (i = 0; i < nums; i++)
		{
			scanf("%d", &a[i]);
		}

		printf("\nEnter the elements to be searched: ");
		fflush(stdout);
		scanf("%d", &value);
		printf("\n");

		for (i = 0; i <nums; i++)
		{
			if (a[i] == value)
			{
				printf("Number found at the location = %d", i+1);
				break;
			}
			else if ((a[i] != value) && (i == nums -1))
				printf("Number not found");
		}

	return 0;
}
