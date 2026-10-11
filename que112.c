// Q112: Maximum sum of any contiguous subarray (Kadane's Algorithm)
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_so_far = arr[0];
    int current_max = arr[0];

    for (int i = 1; i < n; i++) {
        // Either extend the current subarray or start new from arr[i]
        if (current_max + arr[i] > arr[i]) {
            current_max = current_max + arr[i];
        } else {
            current_max = arr[i];
        }

        // Update global maximum
        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
    }

    printf("Maximum subarray sum = %d\n", max_so_far);

    return 0;
}
