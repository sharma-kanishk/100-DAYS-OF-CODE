//Write a program to reverse a given number.

#include <stdio.h>

int main(){
     int num , reverse = 0 , remainder;
    
     //input the number
     printf("enter the number:");
     scanf("%d",&num);
      
     // reverse the number
     while(num != 0) 
     { 
         remainder = num % 10;                  //get the last digit
         reverse = reverse * 10 + remainder;    //append the digit to the reversed number
         num = num / 10;                        //remove the last digit
     }
     //display the reversed number
     printf("reversed number = %d", reverse);
     
     return 0;
}