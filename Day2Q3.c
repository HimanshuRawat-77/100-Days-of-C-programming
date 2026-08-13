//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
# include<stdio.h>
int main(){
    int l,b;    //l=length b=breadth        
    printf("enter l:");
    scanf("%d" ,&l);
     printf("enter b:");
    scanf("%d" ,&b);
    int area , perimeter;
    area = l*b;
    printf("the area of rectangle is: %d" , area );
    perimeter = 2*(l+b);
    printf("\nthe perimeter of rectangle is: %d" , perimeter);
   return 0;

}