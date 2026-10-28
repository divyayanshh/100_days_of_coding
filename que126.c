#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    printf("Filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
    } else {
        printf("File opened successfully.\n");

        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }

        fclose(fp);
    }

    return 0;
}