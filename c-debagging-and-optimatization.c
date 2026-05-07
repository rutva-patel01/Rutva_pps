#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", n);   // ❌ error: missing &

    int arr[n];       // ❌ no validation

    printf("Enter elements:\n");
    for(i = 0; i <= n; i++) {   // ❌ out of bounds
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}