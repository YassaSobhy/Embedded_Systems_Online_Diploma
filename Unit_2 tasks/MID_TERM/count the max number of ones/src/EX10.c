/*
 ============================================================================
 Name        : EX10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int maxOnesBetweenZeros(int num) {
    int maxCount = 0;
    int count = 0;
    int foundZero = 0;

    // Iterate through each bit of the number
    while (num > 0) {
        int bit = num & 1; // Get the least significant bit

        if (bit == 0) {
            // Found a zero, reset the count
            foundZero = 1;
            count = 0;
        } else {
            // Increment the count if we've found a zero before
            if (foundZero) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
        }

        // Right shift the number to process the next bit
        num >>= 1;
    }

    return maxCount;
}

int main() {
    int num;

    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d", &num);

    int result = maxOnesBetweenZeros(num);
    printf("Max ones between zeros in binary representation: %d\n", result);

    return 0;
}
