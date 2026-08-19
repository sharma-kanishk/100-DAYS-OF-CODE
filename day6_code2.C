#include<stdio.h>
//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
int main() {
    int num;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check conditions using an if-else ladder
    if (num >= 0) {
       if (num == 0) {
          printf("Zero");
       }
       else {
        printf("%d is a positive number.\n", num);
       }
    } 
    else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } 
   
    return 0;
}
