//Write a program to classify a triangle as Equilateral, Isosceles,
// or Scalene based on its side lengths.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d %d %d" ,&a,&b,&c);
    
    if(a==b && b==c ){
        printf("Equilateral triangle");
    }
    else if(a == b || a==c || c==b ){
        printf("Isoceles triangle");
    }
    else {
        printf("scalene triangle");
    }
    return 0;
}

