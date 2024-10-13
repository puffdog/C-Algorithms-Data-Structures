#ifndef STACK_LINKED_LIST_H
#define STACK_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Define the structure for the stack using linked list
typedef struct StackLinkedList {
    Node* top;
} StackLinkedList;

// Function prototypes
StackLinkedList* createStackLinkedList();
int isEmptyLinkedList(StackLinkedList* stack);
void pushLinkedList(StackLinkedList* stack, int item);
int popLinkedList(StackLinkedList* stack);
int peekLinkedList(StackLinkedList* stack);
void freeStackLinkedList(StackLinkedList* stack);

#endif // STACK_LINKED_LIST_H
