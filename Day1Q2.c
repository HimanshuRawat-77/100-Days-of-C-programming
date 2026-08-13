//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


# include<stdio.h>
int main(){
    int x,y;
    printf("enter x:");
    scanf("%d" , &x);
    printf("enter y:");
    scanf("%d" ,&y);
    int sum;
    sum = x + y;
    printf("\nsum of two no. is : %d" , sum);
// FOR DIFFERENCE
    int difference;
    difference = x - y ;
    printf("\nthe difference of two no. is : %d" , difference);
// FOR PRODUCT
    int product;
    product = x * y;
    printf("\nproduct of two no. is: %d" , product);
// FOR QUOTIENT
    int quotient;
    quotient = x/y;
    printf("\nquotient of no. is: %d" , quotient);
    return 0;
}
