//#include"prehead.h"
include<stdlib.h>
struct node *s1=NULL;
struct node *head2,*tem,*tem1;










struct node **createlooplinkedlist()
{
int i=1;
s1= (struct node *)malloc(sizeof(struct node));
struct node *node;
s->data=i;
head2=s;
temp=head2;
i++;
while(i<11)
{
tem1= (struct node *)malloc(sizeof(struct node));
tem1->data=i;
tem1->next=NULL;
//printf("this pranays modification");
tem->next=tem1;
tem=tem->next;
if(i==5)
loopnode=tem1;
i++;
}

tem1->next=loopnode;
return(&(head2));
}

void checkforloop(struct node **t)
{






}
