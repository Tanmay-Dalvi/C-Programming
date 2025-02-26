#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int arr[10][10]; 
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nPrimary Diagonal Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
        sum += arr[i][i]; 
    }

    printf("\nSecondary Diagonal Elements: ");
    for (int i = 0; i < n; i++) {
        if (i != (n - 1 - i)) { 
            printf("%d ", arr[i][n - 1 - i]);
            sum += arr[i][n - 1 - i]; 
        }
    }

    printf("\nTotal sum of both diagonals: %d\n", sum);

    return 0;
}
