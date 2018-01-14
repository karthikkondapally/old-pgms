#include<stdio.h>
#include<stdlib.h>
struct node
{
int x;
struct node *next;

}*top,*front,*rear;



main()
{
int ch;
printf("\n 1.stack \n 2.queue");

scanf("%d",&ch);
switch(ch)
{
case 1:
stack();
break;
case 2:
queue();
break;
default:
exit(0);
}
}


stack()
{
int ch,c;
struct node *temp,*temp1;
while(1)
{

printf("\n 1.push 2.pop 3.display\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter the value\n");
scanf("%d",&c);
temp=top;
temp1 = malloc(sizeof(struct node));
temp1->x=c;
if(temp==NULL)
{
top=temp1;
top->next=NULL;
}
else
{
temp1->next=top;
top=temp1;
}
break;
case 2:
if(top==NULL)
{
printf("\nUnderflow\n");
break;
}
temp=top;
top=top->next;
printf("\npoped value %d\n",temp->x);
free(temp);
break;
 
case 3:
temp=top;
while(temp)
{printf("\n%d",temp->x);
temp=temp->next;
}
break;

}
}
}



queue()
{
int ch,c;
struct node *temp,*temp1;
while(1)
{

printf("\n 1.Enqueue 2.Dequeue 3.display\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter the value\n");
scanf("%d",&c);
temp=rear;
temp1 = malloc(sizeof(struct node));
temp1->x=c;
if(temp==NULL)
{
rear=temp1;
rear->next=NULL;
front=rear;
}
else
{
rear->next=temp1;
rear=temp1;
}
break;
case 2:
if(front==NULL)
{
printf("\nUnderflow\n");
break;
}
temp=front;
if(front->next==NULL)
{
front=front->next;
rear=rear->next;
free(temp); 
break;}

else front=front->next;
printf("\npoped value %d\n",temp->x);
free(temp);
break;
 
case 3:
temp=front;
if(front==NULL)
{
printf("\nUnderflow\n");
break;
}
while(temp)
{printf("\n%d",temp->x);
temp=temp->next;
}
break;

}
}
}
