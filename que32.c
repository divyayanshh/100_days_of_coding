// Program to check if a number is a palindrome
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

    while(num != 0) {
        remainder = num % 10;                  // get last digit
        reversed = reversed * 10 + remainder;  // build reversed number
        num = num / 10;                        // remove last digit
    }

    if(original == reversed)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
