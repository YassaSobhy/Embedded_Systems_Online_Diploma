/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

struct data{
	char name[50];
	int roll;
	float marks;
};

int main(void)
{
	struct data x;

	printf("Enter information of students: \n\n");
	printf("Enter name: ");
	fflush(stdout);
	gets(&x.name[0]);
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d", &x.roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f", &x.marks);
	printf("\nDisplaying Information\n");

	printf("name: %s\n", x.name);
	printf("Roll: %d\n", x.roll);
	printf("Marks: %0.2f\n", x.marks);

	return (0);
}
