//Rotate an array to the right by k positions.
#include <stdio.h>
int main (){
       int i , j , n , k , temp;
       //input the number of elements
       printf("enter the number of elements:");
       scanf("%d",&n);

       int arr[n];
       //input the elements
       printf("enter the elements:");
       for (i = 0; i < n; i++) {
           scanf("%d",&arr[i]);
       }
       //input the value of k
       printf("enter the number of positions to rotate:");
       scanf("%d",&k);
       
       for (i = 0; i < k; i++) {
           //save the last element
           temp = arr[n-1];
           //shift all elements one position right
           for (j = n - 1; j > 0; j--) {
               arr[j] = arr[j - 1];
           }
           arr[0] = temp;
       }
       //array after rotation
       printf("Array after rotation:"); 
       for (i = 0; i < n; i++) {
           printf("%d ", arr[i]);
       }
       return 0;
}