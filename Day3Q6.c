//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main (){
    int x,y,z;
    printf("enter x:");
    scanf("%d" ,&x);
    printf("enter y:");
    scanf("%d" ,&y);
    printf("value of x and y before interchange: %d,%d",x,y);
    z = x;
    x = y;
    y = z;
    printf("\nvalue of x and y after interchange: %d,%d",x,y);
    return 0;
}