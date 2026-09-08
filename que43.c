// Write a C program to check if a number is a Strong Number.

#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of factorials of digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    // Check if sum equals the number
    if (sum == num) {
        printf("%d is a Strong Number\n", num);
    } else {
        printf("%d is NOT a Strong Number\n", num);
    }

    return 0;
}
