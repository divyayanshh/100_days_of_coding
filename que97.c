#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character (first initial)
    printf("%c", name[0]);

    // Loop through the string and print the character after each space
    for (int i = 0; i < strlen(name); i++) {
        if (name[i] == ' ' && name[i+1] != '\0') {
            printf("%c", name[i+1]);
        }
    }

    return 0;
}
