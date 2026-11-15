
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e1, e2;

    // Input first employee
    printf("Enter details of first employee:\n");

    printf("Enter ID: ");
    scanf("%d", &e1.id);

    printf("Enter Name: ");
    scanf("%49s", e1.name);

    printf("Enter Salary: ");
    scanf("%f", &e1.salary);

    // Input second employee
    printf("\nEnter details of second employee:\n");

    printf("Enter ID: ");
    scanf("%d", &e2.id);

    printf("Enter Name: ");
    scanf("%49s", e2.name);

    printf("Enter Salary: ");
    scanf("%f", &e2.salary);

    // Compare structures member by member
    if (e1.id == e2.id &&
        strcmp(e1.name, e2.name) == 0 &&
        e1.salary == e2.salary) {

        printf("\nBoth structures are identical.");
    }
    else {
        printf("\nBoth structures are not identical.");
    }

    return 0;
}
