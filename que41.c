#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find number of digits
    digits = (int)log10(num);

    // Extract first and last digit
    firstDigit = num / (int)pow(10, digits);
    lastDigit = num % 10;

    // Remove first digit
    int middlePart = num % (int)pow(10, digits);
    middlePart = middlePart / 10;

    // Construct swapped number
    swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
