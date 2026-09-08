// Write a C program to find the sum of array elements.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // declare array of size n

    // Read elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // add each element to sum
    }

    // Print sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
