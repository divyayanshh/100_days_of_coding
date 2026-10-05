#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);   // size of array
    int arr[n];
    
    // input array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // brute force approach
    for(int i = 0; i < n; i++) {
        int prevGreater = -1;
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;   // nearest greater found
            }
        }
        printf("%d", prevGreater);
        if(i != n - 1) printf(", "); // comma separated
    }
    return 0;
}
