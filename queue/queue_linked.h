#ifndef QUEUE_LINKED_LIST_H
#define QUEUE_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Define the structure for the queue using linked list
typedef struct QueueLinkedList {
    Node* front;
    Node* rear;
} QueueLinkedList;

// Function prototypes
QueueLinkedList* createQueueLinkedList();
int isEmptyLinkedList(QueueLinkedList* queue);
void enqueueLinkedList(QueueLinkedList* queue, int item);
int dequeueLinkedList(QueueLinkedList* queue);
int peekLinkedList(QueueLinkedList* queue);
void freeQueueLinkedList(QueueLinkedList* queue);

#endif // QUEUE_LINKED_LIST_H
