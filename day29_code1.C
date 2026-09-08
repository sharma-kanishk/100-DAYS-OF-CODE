//Find the sum of array elements.
#include <stdio.h>
int main (){
       int i , n;
       int sum = 0;
       printf("enter the number of elements:\n");
       scanf("%d",&n);
       
       int arr[n];
       printf("enter the elements:\n");
       for (i = 0 ; i < n ; i++) {
           scanf("%d",&arr[i]);
       } 
       
       for (i = 0 ; i < n ; i++) {
           sum = sum + arr[i];
       }
       printf("the sum of array elements is:%d", sum);
       return 0;
}