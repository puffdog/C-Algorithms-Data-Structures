#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a double linked list node
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

// Function prototypes
Node* createNode(int data);
void append(Node** head_ref, int new_data);
void prepend(Node** head_ref, int new_data);
void deleteNode(Node** head_ref, Node* del);
void printList(Node* node);
void freeList(Node* node);

#endif // DOUBLE_LINKED_LIST_H
