#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Function prototypes
Node* createNode(int data);
void insert(Node** root, int data);
void deleteNode(Node** root, int data);
void inOrderTraversal(Node* root);
void preOrderTraversal(Node* root);
void postOrderTraversal(Node* root);

#endif // BINARY_TREE_H
