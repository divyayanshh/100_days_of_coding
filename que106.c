#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int nextGreater = -1;

        // Check elements to the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        // Print comma-separated output
        if (i > 0) {
            printf(", ");
        }
        printf("%d", nextGreater);
    }

    return 0;
}
