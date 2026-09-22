#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int spaces = 0, digits = 0, special = 0, i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // read input including spaces

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (!isalpha(str[i])) {
            special++;
        }
        i++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
