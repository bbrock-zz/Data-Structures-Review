// Removing all nodes in a LLL

node * temp;

while(!head)
{
temp = head;
head = head->next;
delete temp;
temp = NULL;
}
//