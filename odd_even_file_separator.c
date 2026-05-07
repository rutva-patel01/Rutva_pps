#include <stdio.h> 
#include <stdlib.h> 

int main() { 
    FILE *fp, *fodd, *feven; 
    int num; 

    // Open input file 
    fp = fopen("data.txt", "r"); 

    if (fp == NULL) { 
        printf("Error: Cannot open input file.\n"); 
        return 1; 
    } 

    // Open output files 
    fodd = fopen("odd.txt", "w"); 
    feven = fopen("even.txt", "w"); 

    if (fodd == NULL || feven == NULL) { 
        printf("Error: Cannot create output files.\n"); 
        fclose(fp); 
        return 1; 
    } 

    // Read numbers and separate them 
    while (fscanf(fp, "%d", &num) != EOF) { 
        if (num % 2 == 0) 
            fprintf(feven, "%d ", num); 
        else 
            fprintf(fodd, "%d ", num); 
    } 

    fclose(fp); 
    fclose(fodd); 
    fclose(feven); 

    // Display Odd Numbers 
    printf("\nOdd Numbers:\n"); 
    fodd = fopen("odd.txt", "r"); 
    while (fscanf(fodd, "%d", &num) != EOF) { 
        printf("%d ", num); 
    } 
    fclose(fodd); 

    // Display Even Numbers 
    printf("\n\nEven Numbers:\n"); 
    feven = fopen("even.txt", "r"); 
    while (fscanf(feven, "%d", &num) != EOF) { 
        printf("%d ", num); 
    } 
    fclose(feven); 

    return 0; 
}