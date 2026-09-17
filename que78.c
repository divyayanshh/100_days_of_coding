#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int sum = 0;

    // Read matrix dimensions
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 0;
    }

    int matrix[rows][cols];

    // Read matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum the main diagonal elements where row index equals column index (i == j)
    for (i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    printf("%d\n", sum);

    return 0;
}