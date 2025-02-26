#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[10][10]; // Assuming max size is 10x10

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    if (n % 2 == 1) {
        int centerIndex = n / 2;
        printf("\nCenter element: %d\n", matrix[centerIndex][centerIndex]);
    } else {
        printf("\nNo single center element (even-sized matrix).\n");
    }

    return 0;
}
