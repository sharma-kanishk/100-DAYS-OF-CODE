//Reverse an array without taking extra space.

#include <stdio.h>
int main (){
        int i , n ;

        //For array size
        printf("enter number of elements in the array :");
        scanf("%d",&n);
        
        int arr[n];

        //enter the elements of array
        printf("enter the elements:");

        for (i = 0; i < n; i++) {
            scanf("%d",&arr[i]);
        }
        
        //to reverse the array
        printf("the array in reverse :\n");
        for (i = n-1; i >= 0; i--) {
            printf("%d\n",arr[i]);
        }
        return 0;
}