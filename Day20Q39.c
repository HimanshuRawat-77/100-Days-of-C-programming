//Write a program to find the product of odd digits of a number

#include <stdio.h>

int main() {
    int n, digit, product = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;

        if(digit % 2 == 1) {
            product = product * digit;
        }
        n = n / 10;
    }
    if(product == 1)
        printf("No odd digits");
    else
        printf("Product is %d", product);

    return 0;
}