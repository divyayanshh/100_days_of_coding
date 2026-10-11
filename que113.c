// Q113: Find the kth smallest element in an array
#include <stdio.h>

// Function to sort the array using simple Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    // Sort the array
    bubbleSort(arr, n);

    // kth smallest element (1-based index)
    if (k > 0 && k <= n) {
        printf("The %dth smallest element is %d\n", k, arr[k-1]);
    } else {
        printf("Invalid k\n");
    }

    return 0;
}
