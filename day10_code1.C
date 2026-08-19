//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main(){
     int side1 , side2 , side3;
     printf("Enter the length of first side:");
     scanf("%d",&side1);
    
     printf("Enter the length of second side:");
     scanf("%d",&side2);

     printf("Enter the length of third side:");
     scanf("%d",&side3);
     
     // Check whether the triangle is valid
     if (side1 <= 0 || side2 <= 0 || side3 <= 0 ||
        side1 + side2 <= side3 ||
        side1 + side3 <= side2 ||
        side2 + side3 <= side1) {

        printf("Invalid Triangle");
     }

     else if ((side1 == side2) && (side2 == side3)) {
        printf("Equilateral Triangle");
     }
     else if ((side1 == side2) || (side1 == side3) || (side2 == side3)) {
        printf("Isosceles Triangle");
     }
     else {
        printf("Scalene Triangle");
     }
     return 0;
}