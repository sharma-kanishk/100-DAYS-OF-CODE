/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/
#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int totalSum = 0;
    int leftSum = 0;

    // Find total sum from 1 to n
    for (int i = 1; i <= n; i++)
    {
        totalSum = totalSum + i;
    }

    // Find pivot integer
    for (int x = 1; x <= n; x++)
    {
        leftSum = leftSum + x;

        int rightSum = totalSum - leftSum + x;

        if (leftSum == rightSum)
        {
            printf("Pivot integer = %d\n", x);
            return 0;
        }
    }

    printf("Pivot integer = -1\n");

    return 0;
}