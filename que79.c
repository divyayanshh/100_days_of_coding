#include <stdio.h>

void diagonalTraversal(int n, int m, int mat[n][m]) {
    // There are (n + m - 1) diagonals
    for (int d = 0; d < n + m - 1; d++) {
        int row = (d < m) ? 0 : d - m + 1;
        int col = (d < m) ? d : m - 1;

        while (row < n && col >= 0) {
            printf("%d ", mat[row][col]);
            row++;
            col--;
        }
        printf("\n");
    }
}

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3, m = 3;
    diagonalTraversal(n, m, mat);

    return 0;
}
