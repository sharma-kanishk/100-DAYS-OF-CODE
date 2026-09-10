//Find the digit that occurs the most times in an integer number
#include <stdio.h>

int main() {
    long long n;
    int digit, i;
    int count[10] = {0};
    int max = 0, mostDigit = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%lld", &n);

    // Count occurrence of each digit
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    // Find the digit with maximum occurrence
    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            mostDigit = i;
        }
    }

    printf("Most occurring digit = %d\n", mostDigit);
    printf("It occurs %d times.\n", max);

    return 0;
}