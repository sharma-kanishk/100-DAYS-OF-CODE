//Search in a sorted array using binary search.
#include <stdio.h>
int main (){
        int i , n , mid , search;
        printf("enter the numbers of elements in the array:");
        scanf("%d",&n);
         
        int arr[n];

        printf("enter the elements in sorted order:");
        for (i = 0; i < n; i++) {
            scanf("%d",&arr[i]);
        } 
        printf("enter the element to search:");
        scanf("%d",&search);
        
        int high = n-1;
        int low = 0;
        int found = 0;

        while (low <= high) {
              mid = (low + high)/2;
              if (arr[mid] == search) {
                  printf("the element was found at index = %d\n",mid);    
                  found = 1;
                  break;
              }
              else if (search > arr[mid]) {
                  low = mid + 1;
              }
              else {
                  high = mid - 1;
              }
        }
        if (found = 0) {
           printf("element not found\n");
        }
        return 0;
}