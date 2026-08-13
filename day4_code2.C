//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main(){
      int n , sum ;
      printf("Enter the value of n : "); /* represents the total number of terms or the last positive integer you want to add up in the sequence starting from 1*/
      scanf("%d",&n);
      sum = n * (n+1) / 2;
      printf("sum = %d", sum);
      return 0;
}
     