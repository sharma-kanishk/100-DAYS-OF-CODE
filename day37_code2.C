//Find the transpose of a matrix.
#include <stdio.h>
int main (){
       int i , j , rows , cols;
       printf("enter the number of rows:");
       scanf("%d",&rows);
       printf("enter the number of cols:");
       scanf("%d",&cols);
        
       int matrix[rows][cols];
       //input the elements
       printf("enter the elements:");
       for (i = 0; i < rows; i++) {
           for (j = 0; j < cols; j++) {
               scanf("%d",&matrix[i][j]);
           }
       }
       //transpose of matrix
       printf("transpose of matrix is\n");
       for (j = 0; j < cols; j++) {
           for (i = 0; i < rows; i++) {
               printf("%d",matrix[j][i]);
           }
           printf("\n");
       }
       return 0;
}