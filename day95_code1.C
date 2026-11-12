#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that returns a structure
struct Student findTopper(struct Student s[], int n) {
    struct Student top = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    struct Student s[5], topper;

    printf("Enter details of 5 students:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Function returns the top student's structure
    topper = findTopper(s, 5);

    printf("\nTop Student Details:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}