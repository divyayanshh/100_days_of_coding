#include <stdio.h>
#include <string.h>

#define SIZE 26  // only lowercase letters a-z

int areAnagrams(char s[], char t[]) {
    int count[SIZE] = {0};
    int i;

    // If lengths differ, they can't be anagrams
    if (strlen(s) != strlen(t))
        return 0;

    // Count frequency of characters in s
    for (i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // Subtract frequency using t
    for (i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (i = 0; i < SIZE; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char s[100], t[100];

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    if (areAnagrams(s, t))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
