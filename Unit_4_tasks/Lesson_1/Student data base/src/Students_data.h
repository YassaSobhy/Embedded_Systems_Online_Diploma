/*
 * Students_data.h
 *
 *  Created on: Oct 3, 2023
 *      Author: yassa
 */

#ifndef STUDENTS_DATA_H
#define STUDENTS_DATA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


#define DPRINTF(...) { \
    fflush(stdout); fflush(stdin); \
    printf(__VA_ARGS__); \
    fflush(stdout); fflush(stdin); \
}


// structures definition
struct SData
{
	int ID;
	char name[30];
	float height;
};

struct SStudent
{
	struct SData Student;
	struct SStudent* pNext_Student;
};

//APIs
void fill_the_record(struct SStudent* New_Student);
void Add_Student();
int Delete_Student();
void View_Students();
void Delete_All();
void Get_Node(unsigned int index);
int Get_Count_Iterative();
int Get_Count_Recursive(struct SStudent* pTemp_Student);
void Get_Node_From_End(unsigned int index);
void Get_Middle();
void Reverse_List();

#endif
