#include <stdio.h>

int majorityElement(int nums[], int n) {
    int candidate = -1, count = 0;

    // Step 1: Find candidate using Boyer-Moore Voting Algorithm
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    }
    return -1;
}

int main() {
    int nums1[] = {3, 2, 3};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", majorityElement(nums1, n1));

    int nums2[] = {2, 2, 1, 1, 1, 2, 2};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", majorityElement(nums2, n2));

    int nums3[] = {2, 2, 1, 1, 1, 2, 2, 3};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: %d\n", majorityElement(nums3, n3));

    return 0;
}
