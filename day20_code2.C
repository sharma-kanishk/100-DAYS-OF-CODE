//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main()
{
    char binary[100];
    int i = 0;

    // Input the binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find the 1's complement
    while (binary[i] != '\0')
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
        }
        else if (binary[i] == '1')
        {
            binary[i] = '0';
        }
        else
        {
            // If any character other than 0 or 1 is entered
            printf("Invalid binary number!");
            return 0;
        }

        i++;
    }

    // Display the 1's complement
    printf("1's Complement = %s", binary);

    return 0;
}