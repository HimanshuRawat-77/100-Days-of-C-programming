//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int a[10][10];
    int sum[10];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");

    for(int i = 0; i < rows; i++) {
        sum[i] = 0;

        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            sum[i] = sum[i] + a[i][j];
        }
    }
    printf("Sum of each row:\n");

    for(int i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}

