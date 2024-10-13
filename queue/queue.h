#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Define the maximum size of the queue

typedef struct QueueArray {
    int items[MAX];
    int front, rear;
} QueueArray;

// Function prototypes
QueueArray* createQueue();
int isFullArray(QueueArray* queue);
int isEmptyArray(QueueArray* queue);
void enqueue(QueueArray* queue, int item);
int dequeue(QueueArray* queue);
int peekArray(QueueArray* queue);
void freeQueueArray(QueueArray* queue);

#endif // QUEUE_ARRAY_H
