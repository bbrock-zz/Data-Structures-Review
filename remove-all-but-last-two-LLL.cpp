<<<<<<< HEAD
void lll::remove_recursively(node *& head)
{
  if(!head)
    return;
  node * temp = head->next;
  if(temp)
    temp = temp->next;    
  if(temp)
  {
      temp = head->next;
      delete [] head->data;
      delete head;
      head = temp;
      remove_recursively(head);
=======
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
>>>>>>> 721a1955056e341b857de5e5fb5c8b8e0bf4af09
  }
}