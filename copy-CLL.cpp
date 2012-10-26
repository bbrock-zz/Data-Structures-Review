circle_ll::circle_ll(const circle_ll & source)
{
    if(!source.rear) // nothing to display
        return;
    else
    {
        node * temp = source.rear; // temp pointer to the last node
        node * head2;
        do
        {
            temp = temp->next; // the first call will make this point to the head, then each successive node after
            head2 = new node;
            head2->info.activity = new char[strlen(temp->info.activity)+1];
            strcpy(head2->info.activity, temp->info.activity);
            head2->interest = new char[strlen(temp->interest)+1];
            strcpy(head2->interest, temp->interest);
        }
        while(source.rear != temp); // a do while, so the last node is displayed
    }
}
