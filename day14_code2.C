//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main (){
         int n , count;
         long long product = 1; //store product of even numbers
      
         //input the value of n
         printf("enter the value of n:");
         scanf("%d",&n);
      
         //product of even numbers from 1 to n
         for (count = 2; count <= n; count = count + 2)
         {
              product = product * count;
         }
         printf("product of even numbers from 1 to %d = %lld", n , product);
         
         return 0;
}