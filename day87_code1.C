#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role;
    int choice;

    printf("Enter role (0-ADMIN, 1-USER, 2-GUEST): ");
    scanf("%d", &choice);

    role = choice;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have view-only access.\n");
            break;

        default:
            printf("Invalid role.\n");
    }

    return 0;
}