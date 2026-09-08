// Write a C program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // Loop through n terms
    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i;          // 2, 4, 6, 8, ...
        int denominator = 4 * i - 1;    // 3, 7, 11, 15, ...
        sum += (float)numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
