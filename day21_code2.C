//Write a program to check if a number is a perfect number.
#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the sum of all proper divisors
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    // Check if the number is perfect
    if (sum == num)
    {
        printf("%d is a Perfect Number.", num);
    }
    else
    {
        printf("%d is Not a Perfect Number.", num);
    }

    return 0;
}