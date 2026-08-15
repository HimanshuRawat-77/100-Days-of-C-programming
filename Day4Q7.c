   // Write a program to swap two numbers without using a third variable.
   # include <stdio.h>
   int main (){
      int a , b;
      printf("enter a :");
      scanf("%d" ,&a);
      printf("enter b :");
      scanf("%d" ,&b);
      printf("value of a and b before interchange %d,%d" ,a,b);
      a = a+b;
      b = a-b;
      a = a-b;
      printf("\nvalue of a and b after interchange %d,%d" ,a,b);


      return 0;
   }