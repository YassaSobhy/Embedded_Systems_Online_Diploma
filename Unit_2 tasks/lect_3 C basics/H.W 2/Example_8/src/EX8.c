/*
 ============================================================================
 Name        : EX8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	char ch;
	float a, b;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdout);
	scanf("%c", &ch);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f\n%f", &a, &b);

	switch(ch)
	{
	case '+':
		printf("%.1f + %.1f = %.1f\n", a, b, a + b);
		break;
	case '-':
		printf("%.1f - %.1f = %.1f\n", a, b, a - b);
		break;
	case '*':
		printf("%.1f * %.1f = %.1f\n", a, b, a * b);
		break;
	case '/':
		printf("%.1f / %.1f = %.1f\n", a, b, a / b);
		break;
	default :
		printf("invalid inputs\n");
		break;
	}

	return 0;
}
