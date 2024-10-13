#include "stack_array.h"

// Function to create a stack
StackArray* createStack() {
    StackArray* stack = (StackArray*)malloc(sizeof(StackArray));
    stack->top = -1;
    return stack;
}

// Function to check if the stack is full
int isFull(StackArray* stack) {
    return stack->top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty(StackArray* stack) {
    return stack->top == -1;
}

// Function to push an item onto the stack
void push(StackArray* stack, int item) {
    if (isFull(stack)) {
        printf("Stack is full. Unable to push %d.\n", item);
        return;
    }
    stack->items[++stack->top] = item;
    printf("%d pushed to stack.\n", item);
}

// Function to pop an item from the stack
int pop(StackArray* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Unable to pop.\n");
        return -1; // Return -1 to indicate the stack is empty
    }
    return stack->items[stack->top--];
}

// Function to get the top item of the stack without popping it
int peek(StackArray* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return -1; // Return -1 to indicate the stack is empty
    }
    return stack->items[stack->top];
}

// Function to free the stack
void freeStack(StackArray* stack) {
    free(stack);
}
