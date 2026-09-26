//Write a program to reverse a given number.
# include<stdio.h>
int main(){
    int n ;
    printf("enter n:");
    scanf("%d" ,&n);
    int r = 0;
    while(n>0){
        n = n % 10;
        r = r * 10 + n;
        n = n / 10;
    }
    printf("%d" , r);
return 0;
}