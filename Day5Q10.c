// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
# include <stdio.h>
int main(){
    float time,seconds,hours,minutes;
    printf("enter time in second:");
    scanf("%f" ,&seconds);
    minutes = seconds/60;
    hours = minutes/3600;
   
    printf("Hours:minutes:seconds::%f,%f,%f" ,hours,minutes,seconds);    

    return 0;
}
