#include <stdio.h>
#include <string.h>

int isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Lengths must match
    if (len1 != len2) return 0;

    // Create a new string str1+str1
    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[] = "abcd";
    char str2[] = "cdab";

    if (isRotation(str1, str2))
        printf("Yes, '%s' is a rotation of '%s'\n", str2, str1);
    else
        printf("No, '%s' is not a rotation of '%s'\n", str2, str1);

    return 0;
}
