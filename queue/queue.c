#include "queue_array.h"

// Function to create a queue
QueueArray* createQueue() {
    QueueArray* queue = (QueueArray*)malloc(sizeof(QueueArray));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

// Function to check if the queue is full
int isFullArray(QueueArray* queue) {
    return queue->rear == MAX - 1;
}

// Function to check if the queue is empty
int isEmptyArray(QueueArray* queue) {
    return queue->front == -1 || queue->front > queue->rear;
}

// Function to enqueue an item into the queue
void enqueue(QueueArray* queue, int item) {
    if (isFullArray(queue)) {
        printf("Queue is full. Unable to enqueue %d.\n", item);
        return;
    }
    if (isEmptyArray(queue)) {
        queue->front = 0; // Initialize front on the first enqueue
    }
    queue->items[++queue->rear] = item;
    printf("%d enqueued to queue.\n", item);
}

// Function to dequeue an item from the queue
int dequeue(QueueArray* queue) {
    if (isEmptyArray(queue)) {
        printf("Queue is empty. Unable to dequeue.\n");
        return -1; // Return -1 to indicate the queue is empty
    }
    return queue->items[queue->front++];
}

// Function to get the front item of the queue without dequeuing it
int peekArray(QueueArray* queue) {
    if (isEmptyArray(queue)) {
        printf("Queue is empty.\n");
        return -1; // Return -1 to indicate the queue is empty
    }
    return queue->items[queue->front];
}

// Function to free the queue
void freeQueueArray(QueueArray* queue) {
    free(queue);
}
