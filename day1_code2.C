
#include<stdio.h>

//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.;
int main(){
    int num1, num2, sum, difference, product;
    float quotient;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    sum = num1+num2;
    product = num1*num2;
    difference = num1-num2;
    quotient =(float)num1/num2;
    printf("sum = %d\n", sum);
    printf("product = %d\n", product);
    printf("difference = %d\n", difference);
    printf("quotient = %.3f", quotient);
    return 0;
}