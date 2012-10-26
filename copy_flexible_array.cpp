//assuming some global const int MAX_SIZE for the array size of each node
f_array::f_array(const f_array & source)
{
    node * current = source.head;
    node * head2 = head;
    
    while(current)
    {
        head2 = new node;
        for(int i = 0; i < MAX_SIZE; ++i)
        {
            head2->name[i].info = new char[strlen(current->name[i].info)+1];
            strcpy(head2->name[i].info, current->name[i].info);
        }
        current= current->next;
        head2 = head2->next;
    }
    head2->next = NULL;
}
