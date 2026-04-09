#include <stdio.h>

int main() {
    int N, i, j;

    // Taking input
    printf("Enter value of N: ");
    scanf("%d", &N);

    // Generating series
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
    }

    return 0;
}