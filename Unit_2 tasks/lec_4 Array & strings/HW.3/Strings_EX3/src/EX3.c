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
	char st[50], ch;
	int i, len = 0;

	printf("Enter the string : ");
	fflush(stdout);
	gets(st);

	for (i = 0; st[i] != '\0'; i++)
	{
		len++;
	}
	len--;
	for (i =0; i < len; i++)
	{
		ch = st[len];
		st[len] =st[i];
		st[i] = ch;
		len--;
	}
	printf("Reverse string is : %s", st);

	return 0;
}
