#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include "binary_tree.h"

// Function prototypes specific to BST
void insertBST(Node** root, int data);
void deleteBST(Node** root, int data);
Node* search(Node* root, int data);

#endif // BINARY_SEARCH_TREE_H
