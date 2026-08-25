#include <stdio.h>

int main()
{
    int num, original, reverse = 0, remainder;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for comparison later
    original = num;

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;          // Get the last digit
        reverse = reverse * 10 + remainder; // Build the reversed number
        num = num / 10;                // Remove the last digit
    }

    // Check if the original number and reversed number are equal
    if (original == reverse)
    {
        printf("%d is a palindrome.", original);
    }
    else
    {
        printf("%d is not a palindrome.", original);
    }

    return 0;
}