//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float cp, sp, profit, loss, percentage;

    // Take Cost Price and Selling Price as input
    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    // Check whether there is profit, loss, or no profit/loss
    if (sp > cp) {
        profit = sp - cp;                  // Calculate profit
        percentage = (profit / cp) * 100;  // Calculate profit percentage
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%", percentage);
    }
    else if (cp > sp) {
        loss = cp - sp;                    // Calculate loss
        percentage = (loss / cp) * 100;    // Calculate loss percentage
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%", percentage);
    }
    else {
        // When Cost Price and Selling Price are equal
        printf("No Profit, No Loss.");
    }

    return 0;   // End of the program
}