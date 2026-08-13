#include <stdio.h>

//Write a program to swap two numbers without using a third variable;
int main(){
    int a , b;
    printf("enter the first number:"); // input from the user
    scanf("%d",&a);
    printf("enter the second number:"); // input from the user
    scanf("%d",&b);
    // Arithmetic operations to swap values
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

'