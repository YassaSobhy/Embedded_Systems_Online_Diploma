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

int main() {
    char *ptr;
    char alphabet = 'A';

    printf("The Alphabets are:\n");

    // Initialize the pointer to point to the first alphabet
    ptr = &alphabet;

    // Loop through and print all the alphabets
    while (*ptr <= 'Z') {
        printf("%c ", *ptr);
        (*ptr)++;
    }

    printf("\n");

    return 0;
}
