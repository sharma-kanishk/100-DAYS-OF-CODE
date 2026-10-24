//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char text[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fputs(text, file);

    fclose(file);

    printf("Text appended successfully.\n");

    return 0;
}