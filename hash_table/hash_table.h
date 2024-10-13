#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdbool.h>

#define TABLE_SIZE 10 // Size of the hash table

typedef struct Node {
    int key;
    int value;
    struct Node* next; // Pointer to the next node for chaining
} Node;

typedef struct HashTable {
    Node** table; // Array of pointers to nodes
} HashTable;

// Function prototypes
HashTable* createHashTable();
void freeHashTable(HashTable* ht);
unsigned int hash(int key);
bool insert(HashTable* ht, int key, int value);
bool delete(HashTable* ht, int key);
int search(HashTable* ht, int key);
void printHashTable(HashTable* ht);

#endif // HASH_TABLE_H
