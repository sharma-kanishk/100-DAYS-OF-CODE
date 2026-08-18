//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main(){
   float a, b, c, d, root1, root2 ;
   printf("enter a :"); //enter coefficient a
   scanf("%f", &a);
   
   printf("enter b :"); //enter coefficient b
   scanf("%f", &b);
   
   printf("enter c :"); //enter coefficient c
   scanf("%f", &c);

   d = b * b - 4 * a * c; //d = discriminant
   if (d > 0) {
      root1 = (-b + sqrt(d)) / (2 * a);
      root2 = (-b - sqrt(d)) / (2 * a);
  
      printf("roots are real and distinct.\n");
      printf("root1 = %2.f\n", root1);
      printf("root2 = %2.f\n", root2);
   }
   else if (d == 0) {
      root1 = -b / ( 2 * a);
     
      printf("roots are real and equal");
      printf("root1 = root2 = %2.f\n", root1);
   }
   else {
      printf("roots are imaginary and complex.\n");
   }
   return 0;
}
