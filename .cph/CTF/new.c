#include <stdio.h>
#include <stdlib.h>

int main() {
    float balance = 0.0;
    char format_string[100];

    // Create a format string to print out the stack contents
    sprintf(format_string, "%%x%%x%%x%%x");

    // Withdraw money using the format string
    withdraw(&balance, format_string);

    return 0;
}

void withdraw(float *balance, char *format_string) {
    float amount;
    printf("Enter the amount to withdraw: $\n");
    scanf("%f", &amount);

    // Use the format string to print out the stack contents
    printf(format_string);

    // Withdraw the money
    *balance -= amount;
    printf("You have successfully withdrawn $%.2f. Your new balance is $%.2f.\n", amount, *balance);
}