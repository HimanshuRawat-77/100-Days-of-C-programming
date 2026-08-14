///Q5: Write a program to convert temperature from Celsius to Fahrenheit.


# include<stdio.h>
int main(){

float celcius,Fahrenheit;
printf("enter the temperature in celcius:");
scanf("%f" ,& celcius);
Fahrenheit = (celcius * (9.0/5.0)) + 32 ;
printf("temprature in fahrenheit is : %f" ,Fahrenheit);

    return 0;
}