//Write a program to calculate the factorial of a number.

#include <stdio.h>

int main(){
     int n , count;
     long long factorial = 1;
 
     //input from the user
     printf("enter the value of n:");
     scanf("%d",&n);
     
     //check if the number is negative
     if (n < 0) {
        printf("invalid number");
     }
     
     else {
         //calculate factorial
         for (count = 1 ; count <= n; count++) {
            factorial = factorial * count;
         }
         printf("Factorial of %d = %lld",n ,factorial);
     }
     return 0;
}