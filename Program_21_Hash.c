#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Hash table structure
struct HashTable {
    int* array;
    int size;
};

// Function prototypes
void initializeHashTable(struct HashTable* table, int size);
void insertLinearProbing(struct HashTable* table, int key);
void insertQuadraticProbing(struct HashTable* table, int key);
void displayHashTable(struct HashTable table);

int main() {
    struct HashTable linearProbingTable, quadraticProbingTable;
    initializeHashTable(&linearProbingTable, SIZE);
    initializeHashTable(&quadraticProbingTable, SIZE);

    int choice, key;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert using Linear Probing\n");
        printf("2. Insert using Quadratic Probing\n");
        printf("3. Display Hash Table (Linear Probing)\n");
        printf("4. Display Hash Table (Quadratic Probing)\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter key to insert using Linear Probing: ");
                scanf("%d", &key);
                insertLinearProbing(&linearProbingTable, key);
                break;
            case 2:
                printf("Enter key to insert using Quadratic Probing: ");
                scanf("%d", &key);
                insertQuadraticProbing(&quadraticProbingTable, key);
                break;
            case 3:
                printf("Hash Table (Linear Probing):\n");
                displayHashTable(linearProbingTable);
                break;
            case 4:
                printf("Hash Table (Quadratic Probing):\n");
                displayHashTable(quadraticProbingTable);
                break;
            case 5:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}

// Function to initialize a hash table
void initializeHashTable(struct HashTable* table, int size) {
    table->size = size;
    table->array = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        table->array[i] = -1; // -1 indicates an empty slot
    }
}

// Function to insert using Linear Probing
void insertLinearProbing(struct HashTable* table, int key) {
    int index = key % table->size;

    while (table->array[index] != -1) {
        index = (index + 1) % table->size; // Move to the next slot linearly
    }

    table->array[index] = key;
}

// Function to insert using Quadratic Probing
void insertQuadraticProbing(struct HashTable* table, int key) {
    int index = key % table->size;
    int i = 1;

    while (table->array[index] != -1) {
        index = (index + i * i) % table->size; // Quadratic probing
        i++;
    }

    table->array[index] = key;
}

// Function to display the hash table
void displayHashTable(struct HashTable table) {
    for (int i = 0; i < table.size; i++) {
        printf("%d ", table.array[i]);
    }
    printf("\n");
}
