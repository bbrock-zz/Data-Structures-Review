/* Given some CLL node "ptr" */
node * temp = NULL;
if (!head)
    return; //no list

temp = tail;
while (&temp->next != &ptr)
    temp = temp->next;

temp->next = ptr->next;
delete ptr;