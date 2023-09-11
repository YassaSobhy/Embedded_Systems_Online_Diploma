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
#include <string.h>

int main()
{
	char a[50];
	char rev[50];
	char *rp = rev;
	char *p;
	printf("Input a string :");
	fflush(stdout);
	gets(a);
	int l = strlen(a);
	p = &a[l-1];
	int i;
	for (i = 0; i < l; i++)
	{
		rev[i] = *p;
		p--;
	}
	rev[l] = '\0';
	printf("Reverse of the string is : %s", rp);

	return (0);
}
