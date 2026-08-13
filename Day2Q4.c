// Q4: Write a program to calculate the area and circumference of a circle given its radius.

# include<stdio.h>
int main(){
    int radius;
    printf("enter radius:");
    scanf("%d" , &radius);
    int area;
    area = 3.14 * radius * radius;
    printf("area of circle is: %d ", area);
    int  perimeter;
    perimeter = 2 * 3.14 * radius;
    printf("\nperimeter of circle is : %d" , perimeter );
    return 0;
}