#include <stdio.h>
#include <stdlib.h>

// Function to create and write to a file
void createAndWriteFile() {
    char filename[50], text[500];

    printf("Enter file name: ");
    scanf("%49s", filename);

    FILE *fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Error: Unable to create file.\n");
        return;
    }

    printf("Enter text to write: ");
    getchar(); // clear buffer
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    printf("File '%s' created and written successfully.\n", filename);
}

// Function to read file contents
void readFileContents() {
    char filename[50], ch;

    printf("Enter file name: ");
    scanf("%49s", filename);

    FILE *fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return;
    }

    printf("\nContents of '%s':\n\n", filename);

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
}

// Function to append text to a file
void appendToFile() {
    char filename[50], text[500];

    printf("Enter file name: ");
    scanf("%49s", filename);

    FILE *fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }

    printf("Enter text to append: ");
    getchar(); // clear buffer
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    printf("Text appended to '%s' successfully.\n", filename);
}

// Function to clear file contents
void clearFileContents() {
    char filename[50];

    printf("Enter file name: ");
    scanf("%49s", filename);

    FILE *fp = fopen(filename, "w"); // clears content

    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }

    fclose(fp);
    printf("Contents of '%s' have been deleted.\n", filename);
}

int main() {
    int choice;

    while (1) {
        printf("\n===== Simple Text Editor =====\n");
        printf("1. Create and Write to File\n");
        printf("2. Read File\n");
        printf("3. Append to File\n");
        printf("4. Clear File Contents\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createAndWriteFile(); break;
            case 2: readFileContents(); break;
            case 3: appendToFile(); break;
            case 4: clearFileContents(); break;
            case 5:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}