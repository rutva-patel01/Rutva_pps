#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;

    // Taking input
    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Calculating total and percentage
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    // Display results
    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    // Grading using if-else
    if (percentage >= 90) {
        printf("Grade: A\n");
    }
    else if (percentage >= 75) {
        printf("Grade: B\n");
    }
    else if (percentage >= 60) {
        printf("Grade: C\n");
    }
    else if (percentage >= 40) {
        printf("Grade: D\n");
    }
    else {
        printf("Result: Fail\n");
    }

    return 0;
}