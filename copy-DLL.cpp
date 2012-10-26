/* args: const node * source, node *&dest */

if (!source)
    return; //no source list

node * s_curr = source;
node * d_curr = dest;
node * d_prev = NULL;

while (s_curr)
{
    d_curr = new node;
    /* Copy all data memebers from s_curr */
    d_curr->prev = d_prev;
    s_curr = s_curr->next;
    d_prev = d_curr;
    d_curr = d_curr->next;
}
d_curr->next = NULL;