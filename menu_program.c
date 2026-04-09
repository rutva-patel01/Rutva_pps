#include <stdio.h>

int main() {
    int choice, num, a, b, c, sum, remainder;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Positive or Negative\n");
        printf("3. Find Greatest of Three Numbers\n");
        printf("4. Sum of Digits\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 2 == 0)
                    printf("Number is Even\n");
                else
                    printf("Number is Odd\n");
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num >= 0)
                    printf("Number is Positive\n");
                else
                    printf("Number is Negative\n");
                break;

            case 3:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &a, &b, &c);

                if (a >= b && a >= c)
                    printf("Greatest number is: %d\n", a);
                else if (b >= a && b >= c)
                    printf("Greatest number is: %d\n", b);
                else
                    printf("Greatest number is: %d\n", c);
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);

                sum = 0;
                while (num != 0) {
                    remainder = num % 10;
                    sum += remainder;
                    num /= 10;
                }

                printf("Sum of digits = %d\n", sum);
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