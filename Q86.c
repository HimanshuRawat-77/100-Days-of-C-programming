//check string is a palindrome
#include <stdio.h>
int main()
{
    char str[100], rev[100];
    int i = 0, j, k = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    while(str[i] != '\0')
    {
        i++;
    }
    j = i - 1;
    while(j >= 0)
    {
        rev[k] = str[j];
        k++;
        j--;
    }

    rev[k] = '\0';
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != rev[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}