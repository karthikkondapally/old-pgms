//#include"prehead.h"
#include<stdlib.h>
struct node *s=NULL;
struct node *head1,*temp,*temp1;

struct node ** createlinkedlist()
{
int i=1;
s= (struct node *)malloc(sizeof(struct node));
s->data=i;
head1=s;
temp=head1;
i++;
while(i<11)
{
temp1= (struct node *)malloc(sizeof(struct node));
temp1->data=i;
temp1->next=NULL;
temp->next=temp1;
temp=temp->next;
i++;
}
return (&head1);

}

void print(struct node **t)
{
while ((*t)!=NULL)
{
printf("%d ",(*t)->data);
(*t)=(*t)->next;
}
}
