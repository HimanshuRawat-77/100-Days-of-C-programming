//Write a program to check if a number is prime.
#include<stdio.h>
int main(){
    int n , count = 0;
    printf("enter n:");
    scanf("%d", &n);
    for (int i = 1; i <= n ; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    if (n <= 1) {
        printf("Not prime");
    } 
    else if (count == 2) {
        printf("Prime");
    }
     else {
        printf("Not prime");
    }
    return 0;
}
