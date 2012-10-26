/* args: const node * source, node *&dest */

if (!source)
    return; //no source list

node * s_curr = source;
node * d_curr = dest;

while (s_curr)
{
    d_curr = new node;
    /*Copy all data memebers*/
    s_curr = s_curr->next;
    d_curr = d_curr->next;
}
d_curr->next = NULL;