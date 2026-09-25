#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[50];
    int maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline if present
    sentence[strcspn(sentence, "\n")] = '\0';

    char *word = strtok(sentence, " ");
    while (word != NULL) {
        int len = strlen(word);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
