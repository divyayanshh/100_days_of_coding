#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[0] = toupper(str[0]);

    for(int i = 1; str[i] != '\0'; i++) {
        if(str[i - 1] == ' ')
            str[i] = toupper(str[i]);
    }

    printf("%s", str);

    return 0;
}
