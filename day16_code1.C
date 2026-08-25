#include <stdio.h>

int main()
{
    int num, temp, binary[32], i = 0;

    // Take input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Handle the special case when the number is 0
    if (num == 0)
    {
        printf("Binary = 0");
        return 0;
    }

    // Store the original number in a temporary variable
    temp = num;

    // Convert decimal to binary
    while (temp > 0)
    {
        binary[i] = temp % 2;   // Store remainder (0 or 1)
        temp = temp / 2;        // Divide the number by 2
        i++;
    }

    // Print the binary number in reverse order
    printf("Binary = ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}