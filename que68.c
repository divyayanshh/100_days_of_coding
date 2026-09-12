#include <stdio.h>

int main() {
    int arr[100], n, pos;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Shift elements to the left
    for(int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Reduce size

    // Print updated array
    printf("Array after deletion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
