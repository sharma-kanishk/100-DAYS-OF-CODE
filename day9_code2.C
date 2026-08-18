/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/

#include <stdio.h>
int main (){
    float Percentage;
    
    printf("Enter Percentage :");
    scanf("%f", &Percentage);

    if (Percentage < 0 || Percentage > 100) {
       printf("Invalid Percentage");
    }
    else if (Percentage >= 90) {
       printf("Grade A");
    }
    else if (Percentage >= 80) {
       printf("Grade B");
    }
    else if (Percentage >= 70) {
       printf("Grade c");
    }
    else if (Percentage >= 60) {
       printf("Grade D");
    }
    else {
       printf("Grade F");
    }
    return 0;
}