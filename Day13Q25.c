//Write a program to implement a basic calculator using switch-case for +, -, *, /, %
#include <stdio.h>

int main() {
    int n1, n2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%d", &n2);

    switch(operator) {
        case '+':
            printf("Result = %d", n1 + n2);
            break;

        case '-':
            printf("Result = %d", n1 - n2);
            break;

        case '*':
            printf("Result = %d", n1 * n2);
            break;

        case '/':
            printf("Result = %d", n1 / n2);
            break;

        case '%':
            printf("Result = %d", n1 % n2);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}

