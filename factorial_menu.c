#include <stdio.h>

// Recursive function
long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

// Iterative function
long long factorial_iterative(int n) {
    long long fact = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, choice;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Edge case: negative number
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Edge case: large number warning
    if (n > 20) {
        printf("Warning: Result may overflow for large numbers!\n");
    }

    printf("\nChoose Method:\n");
    printf("1. Iterative Method\n");
    printf("2. Recursive Method\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = factorial_iterative(n);
            printf("Factorial (Iterative) of %d = %lld\n", n, result);
            break;

        case 2:
            result = factorial_recursive(n);
            printf("Factorial (Recursive) of %d = %lld\n", n, result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}