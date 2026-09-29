//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    int n, digit;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit == 0)
            printf("1");
        else
            printf("0");

        n = n / 10;
    }

    return 0;
}