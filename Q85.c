//Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        i++;
    }
    j = i - 1;
    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s", str);

    return 0;
}
