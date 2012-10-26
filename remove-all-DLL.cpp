node * temp = NULL;
if(!head)
    return; //no list

while(temp)
{
    temp = head;
    head = head->next;
    head->prev = NULL;
    temp->prev = NULL;
    temp->next = NULL;
    delete temp;
}