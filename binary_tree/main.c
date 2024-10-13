#include <stdio.h>
#include "binary_tree.h"
#include "binary_search_tree.h"

int main() {
    Node* root = NULL;

    // Inserting nodes into the binary search tree
    insertBST(&root, 50);
    insertBST(&root, 30);
    insertBST(&root, 20);
    insertBST(&root, 40);
    insertBST(&root, 70);
    insertBST(&root, 60);
    insertBST(&root, 80);

    // Traversals
    printf("In-order Traversal: ");
    inOrderTraversal(root);
    printf("\n");

    printf("Pre-order Traversal: ");
    preOrderTraversal(root);
    printf("\n");

    printf("Post-order Traversal: ");
    postOrderTraversal(root);
    printf("\n");

    // Searching for a node
    int searchValue = 40;
    Node* foundNode = search(root, searchValue);
    if (foundNode) {
        printf("Node with value %d found.\n", foundNode->data);
    } else {
        printf("Node with value %d not found.\n", searchValue);
    }

    return 0;
}
