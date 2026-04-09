#include <stdio.h>

int main() {
    int num;

    // Taking input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Checking even or odd
    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }

    return 0;
}