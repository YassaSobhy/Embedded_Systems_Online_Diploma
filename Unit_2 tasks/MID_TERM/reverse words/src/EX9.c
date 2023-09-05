/*
 ============================================================================
 Name        : EX9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

void reverseWords(char *str) {
    int length = strlen(str);
    int start = 0;

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int end = i - 1;

            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }
    }
}

int main() {
    char str[] = "mohamed gamal";

    printf("Input: %s\n", str);
    reverseWords(str);
    printf("Output: %s\n", str);

    return 0;
}
