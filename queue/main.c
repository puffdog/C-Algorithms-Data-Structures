#include "queue_array.h"
#include "queue_linked_list.h"

int main() {
    // Array-based queue test
    QueueArray* queueArray = createQueue();
    enqueue(queueArray, 10);
    enqueue(queueArray, 20);
    printf("Dequeued from queue: %d\n", dequeue(queueArray));
    printf("Front element is: %d\n", peekArray(queueArray));
    freeQueueArray(queueArray);

    // Linked list-based queue test
    QueueLinkedList* queueLinkedList = createQueueLinkedList();
    enqueueLinkedList(queueLinkedList, 30);
    enqueueLinkedList(queueLinkedList, 40);
    printf("Dequeued from queue: %d\n", dequeueLinkedList(queueLinkedList));
    printf("Front element is: %d\n", peekLinkedList(queueLinkedList));
    freeQueueLinkedList(queueLinkedList);

    return 0;
}
