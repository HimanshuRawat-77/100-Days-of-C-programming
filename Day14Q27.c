//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <= 2*n-1; i++) {
        if(i % 2 == 1) {
            sum = sum + i;
        }
    }

    printf("Sum = %d", sum);

    return 0;
}
