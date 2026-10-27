#include <stdio.h>

int main()
{
    FILE *fp;
    char text[1000];

    fp = fopen("data.txt", "a"); // Open file in append mode

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fgets(text, sizeof(text), stdin); // Read user input

    fprintf(fp, "%s", text); // Append text to file

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}