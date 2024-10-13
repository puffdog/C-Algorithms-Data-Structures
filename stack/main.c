#include "stack_array.h"
#include "stack_linked_list.h"

int main() {
    // Array-based stack test
    StackArray* stackArray = createStack();
    push(stackArray, 10);
    push(stackArray, 20);
    printf("Popped from stack: %d\n", pop(stackArray));
    printf("Top element is: %d\n", peek(stackArray));
    freeStack(stackArray);

    // Linked list-based stack test
    StackLinkedList* stackLinkedList = createStackLinkedList();
    pushLinkedList(stackLinkedList, 30);
    pushLinkedList(stackLinkedList, 40);
    printf("Popped from stack: %d\n", popLinkedList(stackLinkedList));
    printf("Top element is: %d\n", peekLinkedList(stackLinkedList));
    freeStackLinkedList(stackLinkedList);

    return 0;
}
