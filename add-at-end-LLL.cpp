node * temp = NULL;
if (!head)
    head = new node;
temp = head;

while (temp->next)
    temp = temp->next;
temp->next = new node;