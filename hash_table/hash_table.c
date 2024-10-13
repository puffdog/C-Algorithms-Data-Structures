#include <stdio.h>
#include <stdlib.h>
#include "hash_table.h"

// Create a new hash table
HashTable* createHashTable() {
    HashTable* ht = (HashTable*)malloc(sizeof(HashTable));
    ht->table = (Node**)malloc(TABLE_SIZE * sizeof(Node*));

    for (int i = 0; i < TABLE_SIZE; i++) {
        ht->table[i] = NULL; // Initialize all entries to NULL
    }

    return ht;
}

// Free memory allocated for the hash table
void freeHashTable(HashTable* ht) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node* current = ht->table[i];
        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(ht->table);
    free(ht);
}

// Hash function
unsigned int hash(int key) {
    return key % TABLE_SIZE; // Simple modulo-based hash function
}

// Insert a key-value pair into the hash table
bool insert(HashTable* ht, int key, int value) {
    unsigned int index = hash(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;

    if (ht->table[index] == NULL) {
        ht->table[index] = newNode; // No collision
    } else {
        // Collision resolution using chaining
        Node* current = ht->table[index];
        while (current->next != NULL) {
            if (current->key == key) {
                free(newNode); // Free new node if key already exists
                current->value = value; // Update value
                return true;
            }
            current = current->next;
        }
        if (current->key == key) {
            free(newNode); // Free new node if key already exists
            current->value = value; // Update value
            return true;
        }
        current->next = newNode; // Add new node to the end
    }
    return true;
}

// Delete a key-value pair from the hash table
bool delete(HashTable* ht, int key) {
    unsigned int index = hash(key);
    Node* current = ht->table[index];
    Node* prev = NULL;

    while (current != NULL) {
        if (current->key == key) {
            if (prev == NULL) {
                // Deleting the first node in the chain
                ht->table[index] = current->next;
            } else {
                // Bypass the current node
                prev->next = current->next;
            }
            free(current);
            return true;
        }
        prev = current;
        current = current->next;
    }
    return false; // Key not found
}

// Search for a key in the hash table
int search(HashTable* ht, int key) {
    unsigned int index = hash(key);
    Node* current = ht->table[index];

    while (current != NULL) {
        if (current->key == key) {
            return current->value; // Return the value if key is found
        }
        current = current->next;
    }
    return -1; // Key not found
}

// Print the hash table
void printHashTable(HashTable* ht) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node* current = ht->table[i];
        printf("[%d]: ", i);
        while (current != NULL) {
            printf("(%d, %d) -> ", current->key, current->value);
            current = current->next;
        }
        printf("NULL\n");
    }
}
