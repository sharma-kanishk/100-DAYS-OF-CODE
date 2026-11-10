#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role;
    char *names[] = {"ADMIN", "USER", "GUEST"};

    for (role = ADMIN; role <= GUEST; role++) {
        printf("%s = %d\n", names[role], role);
    }

    return 0;
}