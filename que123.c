#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    /* If file is not empty, line count = newlines + 1 */
    if (characters > 0)
        lines++;

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}