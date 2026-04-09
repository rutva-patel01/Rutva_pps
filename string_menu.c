#include <stdio.h>

int main() {
    char str[100];
    int choice, i, length;

    do {
        printf("\n===== STRING MENU =====\n");
        printf("1. Reverse a String\n");
        printf("2. Convert to Uppercase\n");
        printf("3. Convert to Lowercase\n");
        printf("4. Find Length of String\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Taking string input
        if (choice >= 1 && choice <= 4) {
            printf("Enter a string: ");
            scanf("%s", str);
        }

        switch (choice) {

            case 1:
                // Reverse string
                length = 0;
                while (str[length] != '\0') {
                    length++;
                }

                printf("Reversed String: ");
                for (i = length - 1; i >= 0; i--) {
                    printf("%c", str[i]);
                }
                printf("\n");
                break;

            case 2:
                // Uppercase
                for (i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z') {
                        str[i] = str[i] - 32;
                    }
                }
                printf("Uppercase String: %s\n", str);
                break;

            case 3:
                // Lowercase
                for (i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'A' && str[i] <= 'Z') {
                        str[i] = str[i] + 32;
                    }
                }
                printf("Lowercase String: %s\n", str);
                break;

            case 4:
                // Length of string
                length = 0;
                while (str[length] != '\0') {
                    length++;
                }
                printf("Length of String: %d\n", length);
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}