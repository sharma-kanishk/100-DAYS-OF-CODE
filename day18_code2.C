//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main(){
       int a , b , remainder;
       printf("enter the 2 numbers: ");
       scanf("%d %d",&a ,&b);
       
       while (b != 0) {
            remainder = a % b;
            a = b;
            b = remainder;
       }
       printf("HCF = %d",a);
       return 0;
}