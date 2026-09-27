#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);

    // Print the first initial
    printf("%c", name[0]);

    // Loop through the string
    for (int i = 0; i < len; i++) {
        // If space found and not at the end
        if (name[i] == ' ' && name[i+1] != '\0') {
            // If this is the last word (surname), print it fully
            if (strchr(name + i + 1, ' ') == NULL) {
                printf(" %s", name + i + 1);
                break;
            } else {
                // Otherwise, just print the initial
                printf("%c", name[i+1]);
            }
        }
    }

    return 0;
}
