void lll::remove_all_but_two(node *& head)
{
  if(!head)
    return;
  else
  {
    node * current = head;
    node * previous = head;
    
    if(head->next)
      node * temp = head->next;
      if(temp->next)
        temp = temp->next;
        if(temp->next)
        {
          while(current->next)
          {
            previous = current;
            current = current->next;
          }
          
          while(head != previous)
          {
              temp = head->next;
              delete [] head->data;
              delete head;
              head = temp;
          }
        }
  }
}