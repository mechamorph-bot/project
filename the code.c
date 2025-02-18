#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define ENTRY_LENGTH 256
#define FILE_NAME "diary.txt"

// Function prototypes
void addEntry();
void editEntry(int index);
void deleteEntry(int index);
void searchEntry(const char *keyword);
void displayEntries();
void encrypt(char *data);
void decrypt(char *data);

int main() {
    int choice, index;
    char keyword[ENTRY_LENGTH];

    while (1)
        {
        printf("\nPersonal Diary Management System\n");
        printf("1. Add Entry\n");
        printf("2. Edit Entry\n");
        printf("3. Delete Entry\n");
        printf("4. Search Entry\n");
        printf("5. Display All Entries\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character

        switch (choice) {
            case 1:
                addEntry();
                break;
            case 2:
                printf("Enter entry index to edit: ");
                scanf("%d", &index);
                editEntry(index);
                break;
            case 3:
                printf("Enter entry index to delete: ");
                scanf("%d", &index);
                deleteEntry(index);
                break;
            case 4:
                printf("Enter keyword to search: ");
                fgets(keyword, ENTRY_LENGTH, stdin);
                strtok(keyword, "\n"); // Remove newline character
                searchEntry(keyword);
                break;
            case 5:
                displayEntries();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void addEntry() {
    FILE *file = fopen(FILE_NAME, "a");
    if (!file) {
        perror("Unable to open file");
        return;
    }

    char entry[ENTRY_LENGTH];
    printf("Enter your diary entry: ");
    fgets(entry, ENTRY_LENGTH, stdin);
    encrypt(entry);
    fprintf(file, "%s\n", entry);
    fclose(file);
    printf("Entry added successfully.\n");
}

void editEntry(int index) {
    // Implementation for editing an entry
    // This function will read all entries, modify the specified one, and save them back
}

void deleteEntry(int index) {
    // Implementation for deleting an entry
    // This function will read all entries, skip the specified one, and save the rest
}

void searchEntry(const char *keyword) {
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        perror("Unable to open file");
        return;
    }

    char entry[ENTRY_LENGTH];
    int found = 0;
    while (fgets(entry, ENTRY_LENGTH, file)) {
        decrypt(entry);
        if (strstr(entry, keyword)) {
            printf("Found entry: %s", entry);
            found = 1;
        }
    }
    fclose(file);
    if (!found) {
        printf("No entries found with the keyword: %s\n", keyword);
    }
}

void displayEntries() {
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        perror("Unable to open file");
        return;
    }

    char entry[ENTRY_LENGTH];
    while (fgets(entry, ENTRY_LENGTH, file)) {
        decrypt(entry);
        printf("%s", entry);
    }
    fclose(file);
}

void encrypt(char *data) {
    // Simple encryption logic (Caesar cipher for demonstration)
    for (int i = 0; data[i] != '\0'; i++) {
        data[i] += 3; // Shift characters by 3
    }
}

void decrypt(char *data) {
    // Simple decryption logic (reverse of encryption)
    for (int i = 0; data[i] != '\0'; i++) {
        data[i] -= 3; // Shift characters back by 3
    }
}
