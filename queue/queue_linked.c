#include "queue_linked_list.h"

// Function to create a queue using linked list
QueueLinkedList* createQueueLinkedList() {
    QueueLinkedList* queue = (QueueLinkedList*)malloc(sizeof(QueueLinkedList));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

// Function to check if the queue is empty
int isEmptyLinkedList(QueueLinkedList* queue) {
    return queue->front == NULL;
}

// Function to enqueue an item into the queue
void enqueueLinkedList(QueueLinkedList* queue, int item) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = item;
    newNode->next = NULL;
    
    if (queue->rear == NULL) {
        queue->front = newNode; // If queue is empty, both front and rear point to new node
        queue->rear = newNode;
    } else {
        queue->rear->next = newNode; // Link the new node to the last node
        queue->rear = newNode; // Update rear to point to the new node
    }
    printf("%d enqueued to queue.\n", item);
}

// Function to dequeue an item from the queue
int dequeueLinkedList(QueueLinkedList* queue) {
    if (isEmptyLinkedList(queue)) {
        printf("Queue is empty. Unable to dequeue.\n");
        return -1; // Return -1 to indicate the queue is empty
    }
    Node* temp = queue->front;
    int dequeuedValue = temp->data;
    queue->front = queue->front->next; // Move front to the next node
    if (queue->front == NULL) {
        queue->rear = NULL; // If the queue becomes empty, update rear to NULL
    }
    free(temp);
    return dequeuedValue;
}

// Function to get the front item of the queue without dequeuing it
int peekLinkedList(QueueLinkedList* queue) {
    if (isEmptyLinkedList(queue)) {
        printf("Queue is empty.\n");
        return -1; // Return -1 to indicate the queue is empty
    }
    return queue->front->data;
}

// Function to free the queue
void freeQueueLinkedList(QueueLinkedList* queue) {
    Node* current = queue->front;
    Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    free(queue);
}
