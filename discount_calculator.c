#include <stdio.h>

int main() {
    float rate, quantity, amount, discount = 0, final_amount;

    // Taking input
    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter quantity: ");
    scanf("%f", &quantity);

    // Calculating amount
    amount = rate * quantity;

    // Applying discount based on amount
    if (amount >= 1001 && amount <= 10000) {
        discount = amount * 0.05;
    }
    else if (amount >= 10001 && amount <= 15000) {
        discount = amount * 0.07;
    }
    else if (amount >= 15001 && amount <= 20000) {
        discount = amount * 0.09;
    }
    else if (amount > 20000) {
        discount = amount * 0.12;
    }
    else {
        discount = 0;
    }

    // Final amount after discount
    final_amount = amount - discount;

    // Output
    printf("Total Amount = %.2f\n", amount);
    printf("Discount = %.2f\n", discount);
    printf("Final Amount = %.2f\n", final_amount);

    return 0;
}