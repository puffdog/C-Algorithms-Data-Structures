#include "double_linked_list.h"

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to append a node at the end
void append(Node** head_ref, int new_data) {
    Node* newNode = createNode(new_data);
    Node* last = *head_ref;

    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
    newNode->prev = last;
}

// Function to prepend a node at the beginning
void prepend(Node** head_ref, int new_data) {
    Node* newNode = createNode(new_data);
    newNode->next = *head_ref;

    if (*head_ref != NULL) {
        (*head_ref)->prev = newNode;
    }

    *head_ref = newNode;
}

// Function to delete a node
void deleteNode(Node** head_ref, Node* del) {
    if (*head_ref == NULL || del == NULL) {
        return;
    }

    if (*head_ref == del) {
        *head_ref = del->next;
    }

    if (del->next != NULL) {
        del->next->prev = del->prev;
    }

    if (del->prev != NULL) {
        del->prev->next = del->next;
    }

    free(del);
}

// Function to print the list
void printList(Node* node) {
    Node* last;
    printf("Traversal in forward direction: ");
    while (node != NULL) {
        printf("%d ", node->data);
        last = node;
        node = node->next;
    }

    printf("\nTraversal in reverse direction: ");
    while (last != NULL) {
        printf("%d ", last->data);
        last = last->prev;
    }
    printf("\n");
}

// Function to free the list
void freeList(Node* node) {
    Node* temp;
    while (node != NULL) {
        temp = node;
        node = node->next;
        free(temp);
    }
}
