//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int i , n ;
    int positive = 0;
    int negative = 0 ;
    int zero = 0;

    //finding number of elements in array
    printf("Enter number of elements:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i <n; i++) {
        if (arr[i] == 0) {
           zero++;
        }
        else if (arr[i] > 0) {
           positive++;
        }
        else {
           negative++;
        }
    }
    printf("positive : %d\n",positive);
    printf("negative : %d\n",negative);
    printf("zero : %d\n",zero);
     
    return 0;
}