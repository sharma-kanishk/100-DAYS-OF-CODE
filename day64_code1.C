//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k;
    int maxLength = 0;
    int currentLength;

    printf("Enter a string: ");
    scanf("%s", s);

    for (i = 0; i < strlen(s); i++) {
        currentLength = 0;

        for (j = i; j < strlen(s); j++) {

            for (k = i; k < j; k++) {
                if (s[k] == s[j])
                    break;
            }

            if (k < j)
                break;

            currentLength++;
        }

        if (currentLength > maxLength)
            maxLength = currentLength;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLength);

    return 0;
}
