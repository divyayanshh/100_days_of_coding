// Write a C program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // Loop through n terms
    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;   // odd numbers: 1, 3, 5, 7, ...
        int denominator = 2 * i;     // even numbers: 2, 4, 6, 8, ...
        sum += (float)numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
