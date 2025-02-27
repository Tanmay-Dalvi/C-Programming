#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int temp, sum1 = 0, sum2 = 0, total_sum=0;

    printf("Original Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        sum1 += arr[i][i];
        sum2 += arr[i][2 - i];
        total_sum = sum1 + sum2 - arr[1][1];
    }

    printf("\nSum of left to right diagonal: %d\n", sum1);
    printf("Sum of right to left diagonal: %d\n", sum2);
    printf("Center element: %d\n", arr[1][1]);
    printf("Total sum of both diagonals minus the center element: %d\n", total_sum);

    return 0;
}