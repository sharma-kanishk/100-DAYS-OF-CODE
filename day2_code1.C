#include <stdio.h>

//Write a program to calculate the area and perimeter of a rectangle given its length and breadth;
int main(){
     float length, breadth, perimeter, area ;
     printf("enter the length of the rectangle:");
     scanf("%f", &length);
     printf("enter the breadth of the rectangle:");
     scanf("%f", &breadth);
     perimeter =(float) 2*(length + breadth);
     area =(float) length * breadth;
     printf("perimeter = %2f\n", perimeter);
     printf("area = %2f", area);
     return 0;
}
