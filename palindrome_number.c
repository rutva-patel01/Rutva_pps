#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Taking input
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    original = num;

    // Reversing the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Checking palindrome
    if (original == reversed) {
        printf("The number is a Palindrome.\n");
    } else {
        printf("The number is NOT a Palindrome.\n");
    }

    return 0;
}