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
	char c;

	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);

	if (('a' <= c && c <= 'z' ) || ('A' <= c && c <= 'Z' ))
	{
		printf("%c is an alphabet\n", c);
	}
	else
		printf("%c is not an alphabet\n", c);

	return 0;
}
