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

int findUnique(int a[], int size) {
    int unique = 0;

    for (int i = 0; i < size; i++) {
        unique ^= a[i];
    }

    return unique;
}

int main() {
    int a1[7] = {4, 2, 5, 2, 5, 7, 4};
    int a2[3] = {4, 2, 4};

    int unique1 = findUnique(a1, sizeof(a1) / sizeof(a1[0]));
    int unique2 = findUnique(a2, sizeof(a2) / sizeof(a2[0]));

    printf("Test case 1: Unique number is %d\n", unique1);
    printf("Test case 2: Unique number is %d\n", unique2);

    return 0;
}
