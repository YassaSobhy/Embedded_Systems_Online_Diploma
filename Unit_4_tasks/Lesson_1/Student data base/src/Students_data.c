/*
 ============================================================================
 Name        : Students_data.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "Students_data.h"

struct SStudent* gpFirst_Student = NULL;

void fill_the_record(struct SStudent* New_Student)
{
	char temp_text[40];

	DPRINTF("\n Enter ID : ");
	fgets(temp_text, 40, stdin);
	New_Student -> Student.ID = atoi(temp_text);

	DPRINTF("Enter Student Full Name : ");
	fgets(New_Student -> Student.name, 40, stdin);

	DPRINTF("Enter Student height : ");
	fgets(temp_text, 40, stdin);
	New_Student -> Student.height = atof(temp_text);
}

void Add_Student()
{
	struct SStudent* pNew_Student;
	struct SStudent* plast_Student;

	if(gpFirst_Student == NULL) //empty list
	{
		//create new record
		pNew_Student = (struct SStudent*)malloc(sizeof(struct SStudent));
		gpFirst_Student = pNew_Student;
	}
	else // list containts data
	{
		plast_Student = gpFirst_Student;
		//navigate until reach to last record
		while(plast_Student -> pNext_Student)
			plast_Student = plast_Student -> pNext_Student;
		//create the record
		pNew_Student = (struct SStudent*)malloc(sizeof(struct SStudent));
		plast_Student -> pNext_Student = pNew_Student;
	}
	// now I've to fill the new student with data
	fill_the_record(pNew_Student);
	//set the new last node -> pointer to next to NULL
	pNew_Student -> pNext_Student = NULL;
}

int Delete_Student()
{
	char temp_text[40];
	unsigned int Selected_ID;

	DPRINTF("\n Enter the student ID to be Deleted : ");
	fgets(temp_text, 40, stdin);
	Selected_ID = atoi(temp_text);

	if(gpFirst_Student)
	{
		struct SStudent* pSelected_Student = gpFirst_Student;
		struct SStudent* pPrevious_Student = NULL;

		while(pSelected_Student) // loop through all records
		{
			if(pSelected_Student -> Student.ID == Selected_ID)
			{
				if(pPrevious_Student) // pPrevious exist that mean first node not the selected
				{
					pPrevious_Student -> pNext_Student = pSelected_Student -> pNext_Student;
				}
				else
				{
					gpFirst_Student = pSelected_Student -> pNext_Student;
				}
				free(pSelected_Student);
				return 1;
			}
			pPrevious_Student = pSelected_Student;
			pSelected_Student = pSelected_Student -> pNext_Student;
		}
	}
	DPRINTF("\n can't find this student Id, please try another one!!");
	return 0;
}

void View_Students()
{
	struct SStudent* pCurrent_Student = gpFirst_Student;
	int count = 0;

	if(gpFirst_Student == NULL)
	{
		DPRINTF("\n Empty list!!");
	}

	else
	{
		while(pCurrent_Student)
		{
			DPRINTF("\n Record number %d", count + 1);
			DPRINTF("\n ID : %d", pCurrent_Student -> Student.ID);
			DPRINTF("\n Name : %s", pCurrent_Student -> Student.name);
			DPRINTF(" Height : %f\n", pCurrent_Student -> Student.height);
			pCurrent_Student = pCurrent_Student -> pNext_Student;
			count++;
		}
	}
}

void Delete_All()
{
	struct SStudent* pCurrent_Student = gpFirst_Student;

	if(gpFirst_Student == NULL)
	{
		DPRINTF("\n Empty list");
	}

	else
	{
		while(pCurrent_Student)
		{
			struct SStudent* pTemp_Student = pCurrent_Student;
			pCurrent_Student = pCurrent_Student -> pNext_Student;
			free(pTemp_Student);
		}
		gpFirst_Student = NULL;
	}
	DPRINTF("\n========Done========");

}

void Get_Node(unsigned int index)
{
	int count = 0;
	struct SStudent* pTemp_Student = gpFirst_Student;
	if(gpFirst_Student == NULL)
	{
		DPRINTF("\n Emty list");
	}
	if(index < 0)
	{
		DPRINTF("\n WRONG input!!");
	}
	while(pTemp_Student)
	{
		if(count == index)
		{
			DPRINTF("\n Record number : %d", index);
			DPRINTF("\n ID : %d", pTemp_Student -> Student.ID);
			DPRINTF("\n Name : %s", pTemp_Student -> Student.name);
			DPRINTF("\n Height : %f", pTemp_Student -> Student.height);
		}
		pTemp_Student = pTemp_Student -> pNext_Student;
		count++;
	}
}

int Get_Count_Iterative()
{
    int count = 0;
    struct SStudent* pTemp_Student = gpFirst_Student;

    if (gpFirst_Student == NULL)
    {
        DPRINTF("\n Empty list!!");
        return 0; // Return 0 for an empty list
    }

    while (pTemp_Student != NULL)
    {
        count++;
        pTemp_Student = pTemp_Student->pNext_Student;
    }

    return count;
}


int Get_Count_Recursive(struct SStudent* pTemp_Student)
{
    // Base Case: If the current node is NULL, return 0
    if (pTemp_Student == NULL)
    {
        return 0;
    }

    // Recursive Case: Count the current student and call recursively for the next student
    return 1 + Get_Count_Recursive(pTemp_Student->pNext_Student);
}



void Get_Node_From_End(unsigned int index)
{
    // Check if the list is empty
    if (gpFirst_Student == NULL)
    {
        DPRINTF("\n Empty list");
        return; // Return early to avoid further processing
    }

    // Check if the index is out of range
    unsigned int count = 0;
    struct SStudent* pTemp = gpFirst_Student;

    while (pTemp)
    {
        count++;
        pTemp = pTemp->pNext_Student;
    }

    if (index >= count)
    {
        DPRINTF("\n Invalid Index");
        return; // Return early to avoid further processing
    }

    // Traverse the list to find the student at the given index from the end
    struct SStudent* pMain = gpFirst_Student;
    struct SStudent* pRef = gpFirst_Student;

    // Move pRef 'index' positions ahead
    for (unsigned int i = 0; i < index; i++)
    {
        pRef = pRef->pNext_Student;
    }

    // Move both pointers until pRef reaches the end
    while (pRef->pNext_Student != NULL)
    {
        pRef = pRef->pNext_Student;
        pMain = pMain->pNext_Student;
    }

    DPRINTF("\n Record Index from end to zero-based");
    DPRINTF("\n\t ID : %d", pMain->Student.ID);
    DPRINTF("\n\t Name : %s", pMain->Student.name);
    DPRINTF("\t Height : %f", pMain->Student.height);
}


void Get_Middle()
{
	unsigned int Students_Number = 0;
	if(gpFirst_Student == NULL)
	{
		DPRINTF("\n Empty list");
	}
	// get count of nodes
	Students_Number = Get_Count_Iterative();
	Get_Node(Students_Number / 2);
}

void Reverse_List()
{
	struct SStudent* pPrevious_Student = NULL;
	struct SStudent* pCurrent_Student = gpFirst_Student;
	struct SStudent* pNextStudent  = NULL;

	if(gpFirst_Student == NULL)
	{
		DPRINTF("\n Empty list");
	}
	// check if pCurrent in the lsat node
	while(pCurrent_Student != NULL)
	{
		pNextStudent = pCurrent_Student -> pNext_Student;
		pCurrent_Student -> pNext_Student = pPrevious_Student;
		pPrevious_Student = pCurrent_Student;
		pCurrent_Student = pNextStudent;
	}

	gpFirst_Student = pPrevious_Student;
	DPRINTF("\n========Reverse is Done========");
}
