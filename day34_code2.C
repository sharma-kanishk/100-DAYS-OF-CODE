//Delete an element from an array.
#include <stdio.h>
int main (){
        int i , n , pos;
        //input number of elements
        printf("enter the number of elements:");
        scanf("%d",&n);
        
        int arr[n];
        //enter the elements
        printf("enter the elements:");
        for (i = 0; i < n; i++) {
            scanf("%d",&arr[i]);
        }
        //input the position to delete
        printf("enter the position to delete:");
        scanf("%d",&pos);
        
        for (i = pos-1; i < n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
        printf("array after deletion:");
        for (i = 0; i < n; i++) {
            printf("%d",arr[i]);
        }
        return 0;
}