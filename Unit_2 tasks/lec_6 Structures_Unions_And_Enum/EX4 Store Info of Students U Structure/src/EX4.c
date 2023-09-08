/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

struct data{
	int roll;
	char name[50];
	float marks;
};

int main(void)
{
	struct data s[10];
	int i;

	printf("Enter information of students:\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("For roll number: ");
		fflush(stdout);
		scanf("%d", &s[i].roll);
		printf("Enter name: ");
		fflush(stdout);
		scanf("%s",s[i].name);
		printf("Enter marks: ");
		fflush(stdout);
		scanf("%f", &s[i].marks);
		printf("\n");
	}
	printf("Display information of students:\n\n");
	for (i = 0; i < 10; i++)
	{
		printf("Name: %s\nmarks: %.1f\n\n", s[i].name, s[i].marks);
	}

	return (0);
}
