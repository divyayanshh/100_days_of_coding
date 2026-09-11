#include <stdio.h>

int main() {
    int arr[100], n, key, i, pos;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array elements
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to insert
    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find position to insert
    pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = key;
    n++;

    // Display updated array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
