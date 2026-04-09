#include <stdio.h>

int main() {
    int N, i;
    long long factorial = 1;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &N);

    // Checking for negative number
    if (N < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculating factorial
        for (i = 1; i <= N; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %lld\n", N, factorial);
    }

    return 0;
}