/*Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/
#include <stdio.h>
int main (){
      int i , j , n = 5 ;

      //outer loop controls rows
      for (i = 1; i <= n; i++) {
           //inner loop for stars in each row
           for (j = 1; j <= n; j++) {
                printf("*");
           }
      printf("\n");
      }
      return 0;
}         