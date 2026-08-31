//Write a program to check if a number is a strong number.
#include <stdio.h>
int main(){
        int num , digit , i , original , factorial , sum = 0;
        printf("enter the number:");
        scanf("%d",&num);
        
        original = num ;

        while (num > 0) {
           digit = num % 10;
           factorial = 1;
       
           for (i = 1; i <= digit; i++) {
               factorial = factorial * i;
           }
           sum = sum + factorial;  
           num = num / 10;
        }
        if (sum == original) {
           printf("Strong number");
        }
        else {
           printf("Number is not a strong number");
        }
        return 0;
}