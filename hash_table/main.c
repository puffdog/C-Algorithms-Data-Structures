#include <stdio.h>
#include "hash_table.h"

int main() {
    HashTable* ht = createHashTable();

    // Inserting key-value pairs
    insert(ht, 1, 10);
    insert(ht, 2, 20);
    insert(ht, 12, 30); // This will cause a collision with key 2
    insert(ht, 22, 40); // This will cause a collision with key 2

    // Print the hash table
    printHashTable(ht);

    // Searching for a key
    int keyToSearch = 12;
    int value = search(ht, keyToSearch);
    if (value != -1) {
        printf("Value for key %d: %d\n", keyToSearch, value);
    } else {
        printf("Key %d not found.\n", keyToSearch);
    }

    // Deleting a key
    int keyToDelete = 2;
    if (delete(ht, keyToDelete)) {
        printf("Key %d deleted successfully.\n", keyToDelete);
    } else {
        printf("Key %d not found for deletion.\n", keyToDelete);
    }

    // Print the hash table again
    printHashTable(ht);

    // Free the hash table
    freeHashTable(ht);
    return 0;
}
