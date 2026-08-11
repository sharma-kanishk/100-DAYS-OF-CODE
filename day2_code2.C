#include <stdio.h>

//Write a program to calculate the area and circumference of a circle given its radius ;
int main(){
    float radius, area, circumference;
    printf("enter the radius of the circle:");
    scanf("%f", &radius);
    area = 3.14 * radius * radius ;
    circumference = 2 * 3.14 * radius ;
    printf("area = %2f\n", area);
    printf("circumference = %2f", circumference);
    return 0;
}