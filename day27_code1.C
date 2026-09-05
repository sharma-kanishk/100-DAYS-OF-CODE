/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>
int main (){
      int i , j;
      // for increasing star order (1 ,3 ,5 ,7 ,9)
      for (i = 1; i <= 9; i = i + 2) {
          for (j = 1; j <= i ; j++) {
              printf("*");
          }          
          printf("\n");
      }
      // for decreasing star order (7 ,5 ,3 ,1)
      for (i = 7; i >= 1 ; i = i - 2) {
          for (j = 1; j <= i; j++) {
              printf("*");
          }
          printf("\n");
      }
      return 0;
}