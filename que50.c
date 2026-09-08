// Write a C program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
        // Print leading spaces
        for (int space = 0; space < rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (int star = 1; star <= i; star++) {
            printf("*");
        }
        printf("\n");  // Move to next line after each row
    }

    return 0;
}
