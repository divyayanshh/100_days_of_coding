#include <stdio.h>

int main() {
    int arr[100], n, pos, element;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and element
    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert element
    arr[pos-1] = element;
    n++;

    // Print updated array
    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
