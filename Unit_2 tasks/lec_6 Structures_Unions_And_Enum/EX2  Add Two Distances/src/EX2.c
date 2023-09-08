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

struct data{
	int feet;
	float inch;
};

int main(void)
{
	struct data d1, d2, sum;

	printf("Enter information for 1st distance\n\n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &d1.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f", &d1.inch);
	printf("Enter information for 2nd distance\n\n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &d2.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f", &d2.inch);

	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2. inch;

	if(sum.inch >= 12)
	{
		sum.inch -= 12;
		sum.feet++;
	}

	printf("sum of distances=%d\'-%0.1f\"", sum.feet, sum.inch);


	return (0);
}
