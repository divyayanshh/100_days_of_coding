// Program to print the sum of the first n odd numbers
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // formula for ith odd number
    }

    printf("Sum = %d\n", sum);

    return 0;
}
