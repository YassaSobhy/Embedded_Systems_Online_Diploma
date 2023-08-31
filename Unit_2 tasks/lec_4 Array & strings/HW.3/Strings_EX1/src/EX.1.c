/*
 ============================================================================
 Name        : 1.c
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
	char s[100], ch;
	int i, counts = 0;

	printf("Enter a string: ");
	fflush(stdout);
	gets(s);
	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c", &ch);

	for (i = 0; i <= strlen(s); i++)
	{
		if (s[i] == ch)
			counts += 1;
	}
	printf("Frequency of %c = %d\n", ch, counts);
	return 0;
}
