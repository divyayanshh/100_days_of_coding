// Write a C program to print the following pattern:
//
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>

int main() {
    int rows = 4;  // height of the upper half

    // Upper half (including middle line)
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (int star = 1; star <= (2 * i - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (int star = 1; star <= (2 * i - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
