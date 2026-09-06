//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main (){
       int n , i , flag , j;
       printf("enter n:");
       scanf("%d",&n);
    
       printf("the prime numbers are:");

       for (i = 2; i <= n; i++) {
           flag = 1;
           
           for (j = 2; j < i; j++) {
               if(i % j == 0)  {
                  flag = 0;
                  break;
               }
           }
           if (flag == 1) {
              printf("%d ",i);
           }
       }
       return 0;
}