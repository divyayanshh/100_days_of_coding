#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while(start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseEachWord(char *str) {
    char *wordStart = NULL;
    char *temp = str;

    while(*temp) {
        if(wordStart == NULL && !isspace(*temp)) {
            wordStart = temp;  // mark start of word
        }
        if(wordStart && (isspace(*temp) || *(temp+1) == '\0')) {
            // mark end of word
            char *wordEnd = (isspace(*temp)) ? temp - 1 : temp;
            reverseWord(wordStart, wordEnd);
            wordStart = NULL;
        }
        temp++;
    }
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    reverseEachWord(str);

    printf("Reversed words: %s\n", str);
    return 0;
}
