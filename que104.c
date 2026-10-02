#include <stdio.h>

int pivotInteger(int n) {
    // Total sum of numbers from 1 to n
    int totalSum = n * (n + 1) / 2;

    // Iterate through possible pivot x
    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;          // sum from 1 to x
        int rightSum = totalSum - (x - 1) * x / 2; // sum from x to n
        if (leftSum == rightSum) {
            return x;  // pivot found
        }
    }
    return -1;  // no pivot exists
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int pivot = pivotInteger(n);
    printf("Pivot integer: %d\n", pivot);

    return 0;
}
