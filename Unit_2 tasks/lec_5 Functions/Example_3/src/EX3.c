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

void  rev();

int main()
{
	printf("Enter a sentence: ");

	rev();


	return 0;
}

void  rev()
{
	char ch;
	fflush(stdout);
	scanf("%c", &ch);

	if (ch != '\n')
	{
		rev();
		printf("%c", ch);
	}

}
