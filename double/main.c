#include "double_linked_list.h"

int main() {
    Node* head = NULL;

    // Test append
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);

    // Test prepend
    prepend(&head, 0);

    // Print the list
    printList(head);

    // Delete a node
    deleteNode(&head, head->next); // Delete the second node

    // Print the list after deletion
    printList(head);

    // Free the list
    freeList(head);
    return 0;
}
