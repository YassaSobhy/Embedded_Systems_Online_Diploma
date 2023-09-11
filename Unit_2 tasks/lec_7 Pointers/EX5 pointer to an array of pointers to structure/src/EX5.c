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
struct data {
	char emp_name[20];
	int empid;
};



int main()
{
	struct data emp1 = {"Alex", 1002}, emp2 = {"Yassa", 1864}, emp3 = {"pierre", 2987};
	struct data *a[] = {&emp1, &emp2, &emp3};
	struct data (*(*ptr)[3]) = & a;

	printf("Exmployee Name : %s\n", (*(*ptr))-> emp_name);
	printf("Employee ID : %d\n", (*(*ptr))-> empid);


	return 0;
}
