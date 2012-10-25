// remove-end-LLL.cpp
// 
// This algorithm removes the end node of a Linear Linked List

node * current = head;   // Set current pointer to head
node * previous = head;  // Set previous pointer to head

while (current->next != NULL)   // Traverse current and previous ptr to end of list
{
    previous = current;
    current = current->next;
}

// Here deallocate any dynamic memory that maybe held in the node

delete current;          // Delete Last Node
previous->next = NULL;   // Set previous node's next ptr to NULL
