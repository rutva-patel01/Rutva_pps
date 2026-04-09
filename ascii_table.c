#include <stdio.h>

int main() {
    int i = 0;

    // Using while loop to print ASCII values from 0 to 255
    while (i <= 255) {
        printf("ASCII Value = %d \t Character = %c\n", i, i);
        i++;
    }

    return 0;
}