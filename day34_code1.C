//Insert an element in an array at a given position.
#include <stdio.h>
int main (){
        int n , i , num , pos;
        //input number of elements 
        printf("enter the number of elements:");
        scanf("%d",&n);
       
        int arr[n];
        //input the elements
        printf("enter the elements:");
     
        for (i = 0; i < n; i++) {
             scanf("%d",&arr[i]);
        }
        printf("enter the element to insert:");
        scanf("%d",&num);
        
        printf("enter the position:");
        scanf("%d",&pos);
        //shifting element to one place right
        for (i = n; i >= pos; i--) {
             arr[i] = arr[i - 1];
        }
        arr[pos - 1] = num;
        n++;
         
        printf("array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d",arr[i]);
        }
        return 0;
}