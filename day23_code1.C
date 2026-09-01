//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main (){
     int i , n;
     float sum = 0;
     printf("enter the value of n:");
     scanf("%d",&n);
     
     if (n != 0) {
          for (i = 1; i <= n; i++) {
	       sum = sum + ((2.0 * i) / (i * 4 - 1));
          }
          printf("sum = %f", sum);
     }
     return 0;
}
     