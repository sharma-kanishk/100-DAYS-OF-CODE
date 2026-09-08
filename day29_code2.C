//Find the maximum and minimum element in an array.
#include <stdio.h>
int main (){
       int i , n , maximum , minimum;
       printf("enter the number of elements in array:");
       scanf("%d",&n);
        
       int arr[n];
       printf("enter the elements of the array:");
       for (i = 0; i < n; i++) {
           scanf("%d",&arr[i]);
       }
       //for finding maximum element
       maximum = arr[0];
       for (i = 1; i < n; i++) {
           if (maximum < arr[i]) {
              maximum = arr[i];
           }
       }
       printf("the maximum element in the array is %d\n",maximum);
       
       //for minimum element
       minimum = arr[0];
       for (i = 1; i < n; i++) {
           if (minimum > arr[i]) {
              minimum = arr[i];
           }
       }
       printf("the minimum element in the array is %d\n",minimum);
       return 0;
}