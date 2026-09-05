/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>
int main (){
       int i , j;
       //for increasing star order (1 ,3 ,5 ,7)
       for (i = 1; i <= 7; i = i + 2) {
           for (j = i; j < 7; j = j + 2) {
               printf(" ");
           }
           for (j = 1; j <= i; j++) {
               printf("*");
           }
           printf("\n");
       }
       //for decreasing star order (5 ,3 ,1)
       for (i = 5; i >= 1; i = i - 2) {
           for (j = i; j < 7; j = j + 2) {
               printf(" ");
           }
           for (j = 1; j <= i; j++) {
               printf("*");
           }
           printf("\n");
       }
       return 0;
}