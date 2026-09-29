//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, a[100], key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);
    pos = 0;
    while(pos < n && a[pos] < key) {
        pos++;
    }
    for(int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = key;

    printf("Array after insertion:\n");
    for(int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}