fun(struct node *root)
{
if(!root)
return null;
if (root->data == x)
return root;

prev =root;
temp1=fun(root->left); 
temp2=fun(root->right);

if (temp1)
{

swap (prev->data,temp2->data)

return temp1;
}

if (temp2)
{
swap (prev->data,temp2->data)

return temp2;
}
}
