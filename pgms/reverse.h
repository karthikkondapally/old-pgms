struct Node *k = NULL;
int j;
void reverse(struct Node **t)
{
if( (*t) != NULL)
{
j=pop(&(*t));
push(&k,j);
reverse(&(*t));
}
(*t)=k;

}
