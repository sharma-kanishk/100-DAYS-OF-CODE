//Find the second largest element in an array.
#include <stdio.h>
int main (){
        int i , n , largest , second;
        printf("enter the number of elements:");
        scanf("%d",&n);

        int arr[n];
        printf("enter the elements:");
        for (i = 0; i < n; i++) {
            scanf("%d",&arr[i]);
        }
        largest = arr[0];
        for (i = 1; i < n; i++) {
            if (largest < arr[i]) {
                largest = arr[i];
            }
        }
        second = arr[0];
        for (i = 1; i < n; i++) {
            if (second < arr[i] && arr[i] < largest) {
               second = arr[i];
            }
        }
        printf("the second largest element is: %d",second);
        return 0;
}                                       