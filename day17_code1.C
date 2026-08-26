// Program to check whether a number is an Armstrong number
#include <stdio.h>

int main()
{
    int num, originalNum, remainder, digits = 0;
    int armstrong = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0)
    {
        digits++;
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate the sum of each digit raised to the power of 'digits'
    while (originalNum != 0)
    {
        remainder = originalNum % 10;   // Extract the last digit

        int power = 1;

        // Calculate remainder^digits using a loop
        for (int i = 1; i <= digits; i++)
        {
            power = power * remainder;
        }

        armstrong += power;             // Add the result to the sum
        originalNum /= 10;              // Remove the last digit
    }

    // Check if the number is an Armstrong number
    if (armstrong == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}