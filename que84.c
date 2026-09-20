// Convert lowercase string to uppercase without built-in functions

#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);  // read string
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // ASCII difference between lowercase and uppercase
        }
    }
    
    printf("Uppercase string: %s", str);
    
    return 0;
}
