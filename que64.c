#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};  // Array to store frequency of digits
    int digit, maxDigit, maxCount = 0;

    // Input number
    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    // Display result
    printf("Digit occurring most times: %d (appears %d times)\n", maxDigit, maxCount);

    return 0;
}
