circle_ll::circle_ll(const circle_ll & source)
{
    if(!source.rear) // nothing to display
        return;
    else
    {
        node * temp = source.rear; // temp pointer to the last node
        node * head2 = rear;
        head2->name = new char[strlen(temp->name)+1];
        head2 = head2->next;
        
        do
        {

            temp = temp->next; // the first call will make this point to the head, then each successive node after
            head2 = new node;
            head2->name = new char[strlen(temp->name)+1];
            head2 = head2->next;
        }
        while(source.rear != temp); // a do while, so the last node is displayed
    }
}
