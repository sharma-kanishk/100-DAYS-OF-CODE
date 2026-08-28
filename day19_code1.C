//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main(){
        int a , b , x , y , lcm , hcf ;
        printf("enter the 2 numbers:");
        scanf("%d %d",&a ,&b);
         
        x = a ;
        y = b ;
        
        while (y != 0) {
             int temp = y;
             y = x % y;
             x = temp;
        }
        hcf = x;
        lcm = (a * b) / hcf;
       
        printf("LCM = %d", lcm);
        return 0;
}