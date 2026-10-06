#include <stdio.h>

void productExceptSelf(int nums[], int n) {
    int answer[n];
    int prefix = 1, suffix = 1;

    // Initialize answer array with prefix products
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Multiply with suffix products
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    // Print result
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    productExceptSelf(nums1, n1);  // Output: [24, 12, 8, 6]

    int nums2[] = {-1, 1, 0, -3, 3};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    productExceptSelf(nums2, n2);  // Output: [0, 0, 9, 0, 0]

    return 0;
}
