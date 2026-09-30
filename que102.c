#include <stdio.h>

// Function to find the ceil index
int ceilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            result = mid;      // possible ceil
            high = mid - 1;    // look for smaller index
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = ceilIndex(arr, n, x);
    printf("%d\n", index);

    return 0;
}
