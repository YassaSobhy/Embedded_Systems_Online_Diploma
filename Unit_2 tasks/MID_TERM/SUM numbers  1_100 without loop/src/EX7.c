/*
 ============================================================================
 Name        : EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int summing(int n);

int main()
{
	int sum;
	sum = summing(100);
	printf("the sum till 100 = %d", sum);

}
int summing(int n)
{
	if (n == 1)
		return 1;
	else
		return (summing(n - 1) + n);
}
