#include <stdio.h>

int main() {
    int p, q, r;

    // Input sizes
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &p, &q);

    printf("Enter columns of second matrix: ");
    scanf("%d", &r);

    int A[p][q], B[q][r], C[p][r];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < r; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < q; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    printf("Resultant matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
