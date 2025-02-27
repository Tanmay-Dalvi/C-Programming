#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[10][10]; 

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int min = arr[0][0], max = arr[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("\nMinimum element: %d", min);
    printf("\nMaximum element: %d\n", max);

    return 0;
}
