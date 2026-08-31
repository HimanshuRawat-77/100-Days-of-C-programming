//Write a program to input three numbers and find the largest among them using if–else.
# include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a three numbers a , b and c :");
    scanf("%d %d %d" ,&a,&b,&c);
    if(a>=b && a>=c){
        printf("largest is %d",a);
    }
    else if(b>=c && b>=a){
        printf("largest is %d",b);
    }
    else {
        printf("largest is %d",c);
    }
    return 0;
}