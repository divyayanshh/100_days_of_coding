#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[1000] = {0};   // Assuming elements are in range 0-999

    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            return 0;
        }
        freq[arr[i]]++;
    }

    return 0;
}