#include<stdio.h>
//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is perfectly divisible by 2
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}