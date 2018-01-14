//#include"stackop.h"
#include<stdlib.h>

void print(struct Node *t)
{
while(t!=NULL)
{
printf("%d ",t->data);
t=t->next;
}
}


void push(struct Node **t,int x)
{
struct Node *temp;
temp=(struct Node *)malloc(sizeof(struct Node));
temp->data=x;

if((*t)==NULL)
{
(*t)=temp;
(*t)->next=NULL;
}
else
{
temp->next=(*t);
(*t)=temp;
}
}

int  pop (struct Node **t)
{
int x= ((*t)->data);
(*t)=(*t)->next;
return x;
}




