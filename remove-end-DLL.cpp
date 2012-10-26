// remove-end-DLL.cpp
//
// This algorithm removes the last node in a Doubly Linked List

node * current = head;  // Set Current ptr to Head

while (current->next != NULL)   // Traverse Current ptr to last node
{
    current = current->next;
}

// Here you deallocate any memory that the node your deleting might be managing

current->previous->next = NULL;
delete current;


