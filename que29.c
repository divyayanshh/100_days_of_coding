// Program to calculate factorial of a number
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;  // use long long for larger results

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for(i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }

    return 0;
}

