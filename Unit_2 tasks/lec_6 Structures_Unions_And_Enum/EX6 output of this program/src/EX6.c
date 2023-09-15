/*
 ============================================================================
 Name        : EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
union job {
	//defining a union
	char name[32];
	float salary;
	int worker_no;
}u;
struct job1 {
	char name[32];
	float salary;
}s;
int worker_no;
int main(){
	printf("size of union = %d",sizeof(u));    //output = 32.
	printf("\nsize of structure = %d", sizeof(s)); return 0; // output = 40 bcs the aligment.
}
