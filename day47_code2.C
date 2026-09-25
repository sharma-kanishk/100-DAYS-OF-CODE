//Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char str[200], longest[100];
    int i, j;
    int length = 0, maxLength = 0;
    int start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {

        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            length++;
        }
        else {
            if (length > maxLength) {
                maxLength = length;
                maxStart = start;
            }

            length = 0;
            start = i + 1;
        }

        if (str[i] == '\0') {
            break;
        }
    }

    // Copy longest word
    for (j = 0; j < maxLength; j++) {
        longest[j] = str[maxStart + j];
    }

    longest[j] = '\0';

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLength);

    return 0;
}