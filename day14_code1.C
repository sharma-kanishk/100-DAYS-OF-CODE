//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main(){
      int n ,count;
      int sum = 0;
      
      //input the value of n
      printf("enter the value of n:");
      scanf("%d",&n);
  
      //sum of first n odd numbers
      for (count = 1; count <= n; count++) 
      {
          sum = sum + ((count * 2) - 1) ; // generates odd numbers
      }

      // result
      printf("sum of first %d odd numbers = %d",n , sum);
      return 0;
}