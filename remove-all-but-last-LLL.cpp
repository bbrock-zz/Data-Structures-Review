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
  }
}