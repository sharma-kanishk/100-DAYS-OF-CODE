//Insert an element in a sorted array at the appropriate position
#include <stdio.h>
int main (){
        int i , n , pos , num;
        
        printf("enter the number of element in the array:");
        scanf("%d",&n);
        
        //to input the elements of the array
        int arr[n+1];
        printf("enter the elements in sorted order:");
        for (i = 0; i < n; i++) {
            scanf("%d",&arr[i]);
        }
        //input the element to be added in the array
        printf("enter the number that you want to add to the array:");
        scanf("%d",&num);
        
        pos = n;
        for (i = 0; i < n; i++) {
            if (num < arr[i]) {
               pos = i;
               break;
            }
        }
        for (i = n; i > pos; i--) {
            arr[i] = arr[i-1];
        }
        arr[pos] = num;
        
        for (i = 0; i < n+1; i++) {
            printf("%d\n",arr[i]);
        }
        return 0;
}