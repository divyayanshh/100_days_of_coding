// Program to implement a basic calculator using switch-case
#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // space before %c to consume newline

    switch(op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if(b != 0)
                printf("%d\n", a / b);  // integer division
            else
                printf("Error: Division by zero!\n");
            break;
        case '%':
            if(b != 0)
                printf("%d\n", a % b);
            else
                printf("Error: Modulus by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

