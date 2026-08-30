//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main()
{
    int num, digit;
    long long product = 1;   // Stores the product of odd digits
    int found = 0;           // Checks if any odd digit is present

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Make the number positive if it is negative
    if (num < 0)
    {
        num = -num;
    }

    // Extract each digit and check if it is odd
    while (num > 0)
    {
        digit = num % 10;   // Get the last digit

        if (digit % 2 != 0) // Check if the digit is odd
        {
            product = product * digit;
            found = 1;
        }

        num = num / 10;     // Remove the last digit
    }

    // Display the result
    if (found)
    {
        printf("Product of odd digits = %lld", product);
    }
    else
    {
        printf("No odd digits found.");
    }

    return 0;
}