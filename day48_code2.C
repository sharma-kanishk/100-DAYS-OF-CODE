//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char str[200];
    int i, start, end, j, k;
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

        // Stop if newline is reached
        if (str[i] == '\n') {
            break;
        }

        // Find start of word
        start = i;

        // Find end of word
        while (str[i] != ' ' &&
               str[i] != '\0' &&
               str[i] != '\n') {
            i++;
        }

        end = i - 1;

        // Reverse the word
        j = start;
        k = end;

        while (j < k) {
            temp = str[j];
            str[j] = str[k];
            str[k] = temp;

            j++;
            k--;
        }
    }

    printf("After reversing each word:\n%s", str);

    return 0;
}
