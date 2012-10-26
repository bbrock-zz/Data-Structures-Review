bst::bst(const bst & source)
{
  if(!source.root)
    return;
  else
    copy_bst(source.root, root);
}

void bst::copy_bst(node * const& source, node *& root)
{
  if(!source)
    return;
  else
  {
    root->name = new char[strlen(source->name)+1];
    strcpy(root->name, source->name);
    copy_bst(source->left, root->left);
    copy_bst(sourc->right, root->right);
  }
}
