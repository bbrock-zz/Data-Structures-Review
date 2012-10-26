//  Remove All CLL
//
//  Remove all nodes from a Circular Linked List

if (head == NULL)
    return;

tail->next = NULL;

while (head)
{
    node * temp = head;
    head = head->next;
    delete temp;
}


