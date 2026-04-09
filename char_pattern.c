#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for (i = 1; i <= 5; i++) {

        // Decide character (E to A)
        ch = 'E' - (i - 1);

        // Change case based on row
        if (i % 2 == 0) {
            ch = ch + 32;  // convert to lowercase
        }

        // Print character i times
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}