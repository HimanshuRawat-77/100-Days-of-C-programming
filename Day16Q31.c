//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n, remainder;
    int binary = 0;
    int position = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        remainder = n % 2;

        binary = binary + remainder * position;

        n = n / 2;
        position = position * 10;
    }

    printf("Binary = %d", binary);

    return 0;
}