#include<stdio.h>
#include<stdlib.h>
struct node
{
int x;
struct node *next;
} *head,*temp1,*temp,*prev;
 

main()
{
int ch,el;
struct node *temp2;
while(1)
{
printf("enter the choice");
printf("1.insert\n2.delete\n3.display\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nenter the value\n");
scanf("%d",&el);
temp1 = malloc(sizeof(struct node));
temp1->x=el;
temp=head;
if (temp==NULL)
{
head=temp1;
head->next=NULL;
}
else
{
while(temp->next!=NULL)
temp=temp->next;
temp->next=temp1;
temp1->next=NULL;
}

break;
case 2:
temp=head;
while (temp->next!=NULL)
{ prev=temp;
temp=temp->next;
}
prev->next=NULL;
free(temp);
break;
case 3:
printf("the elements are\n ");
temp=head;
while(temp)
{
printf("%d -> ",temp->x);
temp=temp->next;
}
break;


}
}

}




