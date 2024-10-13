#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Define the maximum size of the stack

typedef struct StackArray {
    int top;
    int items[MAX];
} StackArray;

// Function prototypes
StackArray* createStack();
int isFull(StackArray* stack);
int isEmpty(StackArray* stack);
void push(StackArray* stack, int item);
int pop(StackArray* stack);
int peek(StackArray* stack);
void freeStack(StackArray* stack);

#endif // STACK_ARRAY_H
