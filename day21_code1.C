//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int num, temp, firstDigit, lastDigit;
    int divisor = 1, middlePart, swappedNum;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Find the divisor (10^(number of digits-1))
    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    firstDigit = num / divisor;      // First digit
    lastDigit = num % 10;            // Last digit
    middlePart = (num % divisor) / 10;

    // Swap first and last digits
    swappedNum = lastDigit * divisor + middlePart * 10 + firstDigit;

    printf("Number after swapping = %d", swappedNum);

    return 0;
}