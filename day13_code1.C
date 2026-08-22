//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Input the operator
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // Space before %c ignores any previous newline

    // Perform operation based on the operator
    switch(op)
    {
        case '+':
            printf("\nResult = %d", num1 + num2);
            break;

        case '-':
            printf("\nResult = %d", num1 - num2);
            break;

        case '*':
            printf("\nResult = %d", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("\nResult = %.2f", (float)num1 / num2);
            else
                printf("\nError! Division by zero is not allowed.");
            break;

        case '%':
            if(num2 != 0)
                printf("\nResult = %d", num1 % num2);
            else
                printf("\nError! Modulus by zero is not allowed.");
            break;

        default:
            printf("\nInvalid operator! Please enter +, -, *, / or %%.");
    }

    return 0;
}