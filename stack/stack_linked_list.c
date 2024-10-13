#include "stack_linked_list.h"

// Function to create a stack using linked list
StackLinkedList* createStackLinkedList() {
    StackLinkedList* stack = (StackLinkedList*)malloc(sizeof(StackLinkedList));
    stack->top = NULL;
    return stack;
}

// Function to check if the stack is empty
int isEmptyLinkedList(StackLinkedList* stack) {
    return stack->top == NULL;
}

// Function to push an item onto the stack
void pushLinkedList(StackLinkedList* stack, int item) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = item;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("%d pushed to stack.\n", item);
}

// Function to pop an item from the stack
int popLinkedList(StackLinkedList* stack) {
    if (isEmptyLinkedList(stack)) {
        printf("Stack is empty. Unable to pop.\n");
        return -1; // Return -1 to indicate the stack is empty
    }
    Node* temp = stack->top;
    int poppedValue = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return poppedValue;
}

// Function to get the top item of the stack without popping it
int peekLinkedList(StackLinkedList* stack) {
    if (isEmptyLinkedList(stack)) {
        printf("Stack is empty.\n");
        return -1; // Return -1 to indicate the stack is empty
    }
    return stack->top->data;
}

// Function to free the stack
void freeStackLinkedList(StackLinkedList* stack) {
    Node* current = stack->top;
    Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    free(stack);
}
