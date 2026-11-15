
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;

    // Writing employee data into binary file
    fp = fopen("employee.dat", "wb");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(e), 1, fp);

    fclose(fp);

    // Reading employee data from binary file
    fp = fopen("employee.dat", "rb");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    fread(&e, sizeof(e), 1, fp);

    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", e.id);
    printf("Employee Name: %s\n", e.name);
    printf("Employee Salary: %.2f\n", e.salary);

    fclose(fp);

    return 0;
}
