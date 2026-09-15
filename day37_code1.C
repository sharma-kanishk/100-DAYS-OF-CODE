//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main (){
        int i , j , rows , cols ;
        //input the number of rows and cols
        printf("enter the number of rows:");
        scanf("%D",&rows);
        printf("enter the number of cols:");
        scanf("%D",&cols);
 
        int matrix[rows][cols];
        int sum[rows];
        //enter the elements 
        printf("enter the elements:");
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                scanf("%d",&matrix[i][j]);
            }
        }
        //sum of each row of a matrix
        for (i = 0; i < rows; i++) {
            sum[i] = 0;
            for (j = 0; j < cols; j++) {
                sum[i] = sum[i] + matrix[i][j];
            }
        }
        printf("sum of each row\n");
        for (i = 0; i < rows; i++) {
            printf("row %d = %d\n", i + 1 , sum[i]);
        }
        return 0;
}