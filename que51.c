// Write a C program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
        // Print leading spaces
        for (int space = 1; space < i; space++) {
            printf(" ");
        }
        // Print numbers from i up to rows
        for (int j = i; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n");  // Move to next line after each row
    }

    return 0;
}
