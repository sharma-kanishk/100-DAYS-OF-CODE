//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LEN 50
#define FILENAME "students.txt"

struct Student {
    char name[MAX_NAME_LEN];
    int roll;
    float marks;
};

int main(void) {
    FILE *fp;
    int n, i;

    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid student count.\n");
        return EXIT_FAILURE;
    }

    // 1. Open file in write mode ("w")
    fp = fopen(FILENAME, "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    printf("\n--- Enter Student Details ---\n");
    for (i = 0; i < n; i++) {
        struct Student s;
        printf("\nStudent %d:\n", i + 1);

        printf("Name (single word): ");
        scanf("%49s", s.name);

        printf("Roll Number: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%f", &s.marks);

        // Store record in the file formatted with spaces/newlines
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    printf("\nRecords written to '%s' successfully.\n", FILENAME);

    // 2. Open file in read mode ("r")
    fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    printf("\n--- Reading Records from File ---\n");
    printf("%-20s %-12s %-8s\n", "Name", "Roll No", "Marks");
    printf("----------------------------------------\n");

    struct Student temp;
    // fscanf returns the number of successfully parsed fields
    while (fscanf(fp, "%49s %d %f", temp.name, &temp.roll, &temp.marks) == 3) {
        printf("%-20s %-12d %-8.2f\n", temp.name, temp.roll, temp.marks);
    }

    fclose(fp);
    return EXIT_SUCCESS;
}