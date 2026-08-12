#include <stdio.h>
  
//Write a program to convert temperature from Celsius to Fahrenheit ;
int main(){
    float Celsius , Fahrenheit;
    printf("enter the temperature in Celsius:");
    scanf("%f" ,&Celsius);
    Fahrenheit = (Celsius * 9/5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", Celsius, Fahrenheit);
    return 0;
}