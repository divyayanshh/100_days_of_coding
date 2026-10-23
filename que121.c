#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    // Input name and age
    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("Enter age: ");
    scanf("%d", &age);

    // Write data to file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close file
    fclose(fp);

    // Confirmation message
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}