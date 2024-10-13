#include <stdio.h>
#include <stdlib.h>
#include "binary_search_tree.h"

// Insert a node into the binary search tree
void insertBST(Node** root, int data) {
    if (*root == NULL) {
        *root = createNode(data);
    } else if (data < (*root)->data) {
        insertBST(&((*root)->left), data);
    } else {
        insertBST(&((*root)->right), data);
    }
}

// Search for a node in the binary search tree
Node* search(Node* root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    } else if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

// Delete a node from the binary search tree
void deleteBST(Node** root, int data) {
    // Implementation of deletion logic for BST (not covered in this basic example)
}
