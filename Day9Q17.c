//Write a programm to find the roots of a quadratic equation and categorize them.
# include<stdio.h>
# include<math.h>
int main(){
    int a,b,c;
    printf("enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c); 
    int D , x ,y; //x and y are the roots of quadratic equation . D = determinant

    D = b*b - 4*a*c;

    if(D==0){
        x = -b + pow(D,0.5)/2*a;
        y = -b - pow(D,0.5)/2*a;
        
        printf("roots are real and equal: %d %d",x);
    }
    else if(D>0){
         x = -b + pow(D,0.5)/2*a;
        y = -b - pow(D,0.5)/2*a;
       
        printf("roots are real and different: %d %d",x,y);
    }
    else{
        printf("roots are imaginary");
    }

    
    return 0;
}