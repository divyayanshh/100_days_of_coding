// Program to print the product of even numbers from 1 to n
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // use long long for larger results
    int foundEven = 0;      // flag to check if any even number exists

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {   // loop through even numbers only
        product *= i;
        foundEven = 1;
    }

    if(foundEven)
        printf("Product = %lld\n", product);
    else
        printf("No even numbers up to %d\n", n);

    return 0;
}
