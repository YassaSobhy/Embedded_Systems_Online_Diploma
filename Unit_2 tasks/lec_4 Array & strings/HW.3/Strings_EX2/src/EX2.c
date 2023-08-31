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
	char st[50];
	int i, len = 0;

	printf("Enter a string: ");
	fflush(stdout);
	gets(st);

	for (i = 0; st[i] != '\0'; i++)
	{
		len++;
	}
	printf("Length of string: %d\n", len);

	return 0;
}
