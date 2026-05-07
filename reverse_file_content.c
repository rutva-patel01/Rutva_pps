#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[50];
    long size;

    printf("Enter file name: ");
    scanf("%49s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    // Move to end of file
    fseek(fp, 0, SEEK_END);

    // Get file size
    size = ftell(fp);

    printf("\nFile contents in reverse order:\n\n");

    // Read file from end to beginning
    for (long i = size - 1; i >= 0; i--) {
        fseek(fp, i, SEEK_SET);
        printf("%c", fgetc(fp));
    }

    fclose(fp);

    return 0;
}