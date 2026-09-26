//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char str[200];
    int i, start, end, j;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    i = 0;

    while (str[i] != '\0') {

        // Skip spaces
        if (str[i] == ' ') {
            i++;
            continue;
        }

        // Find the start of the word
        start = i;

        // Find the end of the word
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
        }

        end = i - 1;

        // Reverse the word
        for (j = start; j < end; j++, end--) {
            temp = str[j];
            str[j] = str[end];
            str[end] = temp;
        }
    }

    printf("After reversing each word:\n%s", str);

    return 0;
}