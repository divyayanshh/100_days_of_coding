// Write a C program to print the following pattern:
//
// *
// 
// *
// *
// *
// 
// *
// *
// *
// *
// *
// 
// *
// *
// *
// 
// *

#include <stdio.h>

int main() {
    int rows[] = {1, 3, 5, 3, 1};  // Number of stars in each block
    int blocks = 5;

    for (int b = 0; b < blocks; b++) {
        for (int i = 0; i < rows[b]; i++) {
            printf("*\n");
        }
        printf("\n");  // Blank line between blocks
    }

    return 0;
}
