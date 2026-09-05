// Program to check if a number is an Armstrong number
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count digits
    int temp = num;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of each digit raised to 'digits'
    temp = num;
    while(temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if(result == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
