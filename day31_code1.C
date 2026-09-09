//Search for an element in an array using linear search.

#include <stdio.h>
int main (){
         int n , i , search , found = 0;
         //size of array
         printf("enter the number of elements:");
         scanf("%d",&n);
         
         int arr[n];
         printf("enter the elements of array :");
         //input elements of array
         for (i = 0; i < n; i++) {
             scanf("%d",&arr[i]);
         }
         printf("enter the element to be searched:");
         scanf("%d",&search);
         //for searching the element
         for (i = 0; i < n; i++) {
             if (search == arr[i]) {
                found = 1;
                break;
             }
         } 
         if (found == 1) {
            printf("element found at index : %d",i);
         }
         else {
            printf("element not found");
         }
         return 0;
} 