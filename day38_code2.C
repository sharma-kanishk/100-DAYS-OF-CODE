//Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int n, i, j, symmetric = 1;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the elements of matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check for symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }

        if (symmetric == 0) {
            break;
        }
    }

    if (symmetric == 1)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}