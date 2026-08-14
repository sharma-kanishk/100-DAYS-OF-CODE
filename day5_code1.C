//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>

int main(){
    float P , R , T , CI , amount ;

    printf("Enter Principal :");
    scanf("%f", &P);

    printf("Enter Rate :");
    scanf("%f", &R);


    printf("Enter Time :");
    scanf("%f", &T);
 
    amount = P;

    for (int i = 1; i <= T; i++) {
        amount = amount * (1 + R / 100);
    }
    CI = amount - P;

    printf("Simple Interest=%.0f, Compound Interest=%.2f",
           (P * R * T) / 100 , CI);

    return 0;
}