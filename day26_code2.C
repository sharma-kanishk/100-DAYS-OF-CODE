/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>
int main (){
       int i , j;
       //for increasing star series (1 , 3 , 5)
       for (i = 1; i <= 5; i = i + 2) {
           for (j = 1; j <= i; j++) {
               printf("*\n");
           }
           printf("\n");
       }
       //for decreasing star series (3 , 1)
       for (i = 5; i >= 1; i = i - 2) {
           for (j = 3; j <= i; j++) {
               printf("*\n");
           }
           printf("\n");
       }
       return 0;
}