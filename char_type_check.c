#include <stdio.h>

int main() {
    char ch;

    // Taking input
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Checking character type
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase Letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase Letter.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a Number.\n", ch);
    }
    else {
        printf("%c is a Special Symbol.\n", ch);
    }

    return 0;
}