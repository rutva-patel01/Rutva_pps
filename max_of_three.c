#include <stdio.h>

int main() {
    int a, b, c;

    // Taking input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking equality cases
    if (a == b && b == c) {
        printf("All three numbers are equal.\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Two numbers are equal.\n");
    }
    else {
        // Finding maximum
        if (a > b && a > c) {
            printf("Maximum number is: %d\n", a);
        }
        else if (b > a && b > c) {
            printf("Maximum number is: %d\n", b);
        }
        else {
            printf("Maximum number is: %d\n", c);
        }
    }

    return 0;
}