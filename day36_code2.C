//Find the sum of all elements in a matrix.
#include <stdio.h>
int main (){
      int rows , cols , i , j , sum = 0;
      //input number of rows and columns
      printf("enter the number of rows:");
      scanf("%d",&rows);
      printf("enter the number of columns:");
      scanf("%d",&cols);
      
      int matrix[rows][cols];
      //input the elements of matrix
      printf("enter the elements of the matrix:");
      for (i = 0; i < rows; i++) {
          for (j = 0; j < cols; j++) {
              scanf("%d",&matrix[i][j]);
          }
      }
      //sum of all elements in a matrix
      for (i = 0; i < rows; i++) {
          for (j = 0; j < cols; j++) {
              sum = sum + matrix[i][j];
          }
      }
      printf("sum = %d\n",sum);
      return 0;
}