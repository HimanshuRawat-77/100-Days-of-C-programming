// Inserting an element in an array
// This code demonstrates how to insert an element in an array.
#include <stdio.h>

int main() {
    int n, a[100], element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &pos);


    for(int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

   
    a[pos - 1] = element;

    printf("Array after insertion:\n");
    for(int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
