//Read and print a matrix.
#include <stdio.h>
int main (){
       int rows , cols , i , j;
       //input number of rows and columns
       printf("enter the number of rows:");
       scanf("%d",&rows);
       
       printf("enter the number of columns:");
       scanf("%d",&cols);
      
       int matrix[rows][cols] ;
       //read the matrix
       printf("enter the elements:");
       for (i = 0; i < rows; i++) {
           for (j = 0; j < cols; j++) {
               scanf("%d",&matrix[i][j]);
           }
       }
       printf("the matrix is:\n");
       for (i = 0; i < rows; i++) {
           for (j = 0; j < cols; j++) {
               printf("%d ",matrix[i][j]);
           }
           printf("\n");
       }
       return 0;
}