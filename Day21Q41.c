//Write a program to swap the first and last digit of a number

#include <stdio.h>
int main() {
    int n, first, last, digits = 1, middle, result;

    printf("Enter number: ");
    scanf("%d", &n);
    last = n % 10;

    int temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;
    middle = (n % digits) / 10;
    result = last * digits + middle * 10 + first;

    printf("After swapping: %d", result);

    return 0;
}
