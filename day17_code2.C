// Program to check whether a number is prime
#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Numbers less than or equal to 1 are not prime
    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        // Check for factors from 2 to num/2
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0; // Number is divisible, so it is not prime
                break;
            }
        }
    }

    // Display the result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}