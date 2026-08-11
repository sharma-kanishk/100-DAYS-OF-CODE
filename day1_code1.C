#include <stdio.h>

//Q1: Write a program to input two numbers and display their sum.;
int main(){
    int num1,num2,sum ;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("sum = %d", sum);
    return 0;
}

