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
	char c;

	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &c);

	switch(c)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("%c is vowel.\n", c);
		break;
	default :
		printf("%c is a consonant.\n", c);
		break;
	}

	return 0;
}
