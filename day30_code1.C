//Count Even and Odd Numbers.
#include <stdio.h>
int main() {
    int i, n, even = 0, odd = 0;
    //finding number of elements in array
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        } 
        else {
            odd++;
        }
    }
    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d", odd);

    return 0;
}
