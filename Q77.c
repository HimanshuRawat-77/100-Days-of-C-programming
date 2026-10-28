//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int a[10][10], n;
    int distinct = 1;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct == 1)
        printf("Diagonal elements are distinct.");
    else
        printf("Diagonal elements are not distinct.");

    return 0;
}