#include <stdio.h>
#include <stdlib.h>


struct node
{
int data;
struct node *left;
struct node *right;
}*root,*temp,*node1;

tree(int i)
{

node1 = malloc(sizeof(struct node));
node1->data=i;
node1->right=NULL;
node1->right=NULL;
node1->left=NULL;

if (root == NULL)
root=node1;
temp=root;
while(1)
{

if (temp->left==NULL)
{
   temp->left=node1;
break;
}

if ((temp->left!=NULL)&&(temp->right==NULL))
{ 
  temp->right=node1;
break;
 }
   
if ((temp->left==NULL)&&(temp->right==NULL))
{
temp=temp->left;

}

}


}



void inorder(struct node* node)
{
     if (node == NULL)
          return;
 
     /* first recur on left child */
     inorder(node->left);
 
     /* then print the data of node */
     printf("%d ", node->data); 
 
     /* now recur on right child */
     inorder(node->right);
}

main()
{
    int i,ch;
    printf("\nOPERATIONS ---");
   printf("\n1 - Insert an element into tree\n");
    printf("2 - Delete an element from the tree\n");
    printf("3 - Inorder Traversal\n");
    printf("4 - Preorder Traversal\n");
    printf("5 - Postorder Traversal\n");
    printf("6 - Exit\n");
    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: 
printf("\nEnter number : ");
        scanf("%d", &i);   
            tree(i);
            break;
        case 2:    
//            delete();
            break;
        case 3:    
            inorder(root);
            break;
        case 4:    
//            preorder(root);
            break;
        case 5:    
//            postorder(root);
            break;
        case 6:    
            exit(0);
        default :     
            printf("Wrong choice, Please enter correct choice  ");

            break;    

        }

    }


}
