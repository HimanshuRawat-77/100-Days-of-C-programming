// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
# include <stdio.h>
int main (){
    float SI , CI , principal ,rate ,time ;
    printf("enter rate:");
    scanf("%f" ,&rate);
    printf("enter pricipal:");
    scanf("%f" ,&principal);
     printf("enter time:");
     scanf("%f" ,&time);
     SI = principal*rate*time/100;
     printf("simple interest is :%f\n" ,SI);
    CI = principal * pow((1 + rate / 100), time) - principal; //pow(a,b)
    printf("Compound Interest is :%f" ,CI);
    return 0;
}