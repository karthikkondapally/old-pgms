#include<stdio.h>
#include<stdlib.h>
	struct stacknode
	{
		int data;
		struct stacknode *next;
	};
void push(struct stacknode **,int);
void reverse(struct stacknode **);
void insertb(struct stacknode **,int);
int pop(struct stacknode **);
void printstack(struct stacknode **);
main()
{

	struct stacknode *top;
	top=NULL;
	int x;
	while(1)
	{
		
	
		
		printf("\n Enter the value to be pushed");
		scanf("%d",&x);
		if(x<0)
		{
		break;
		}	
		push(&top,x);
		
	}
	printstack(&top);
/*	while(1)
	{
		int d;
		printf("\n want to delete, then press 1");
		scanf("%d",&d);
		if(d==1)
		printf("\n popped element is %d",pop(&top));
		else 
		break;
	}*/
	printf("\n Reverse of the stack is as follows\n");
	reverse(&top);
	printstack(&top);
}
void push(struct stacknode **top_ref,int x)
{
	struct stacknode *temp;
	temp=(struct stacknode *)malloc(sizeof(struct stacknode));
	temp->data=x;
	if(*top_ref==NULL)
	{
		temp->next=NULL;
	}
	temp->next=*top_ref;
	*top_ref=temp;
}
int pop(struct stacknode **top_ref)
{
	struct stacknode *temp;
	if(*top_ref==NULL)
	{
		printf("\nStack is Empty");
	return 0;
	}
	temp=*top_ref;
	*top_ref = (*top_ref)->next;
	int rx;
	rx=temp->data;
	free(temp);
	return rx;
}
void printstack(struct stacknode **top_ref)
{
	struct stacknode *temp;
	temp=*top_ref;
	while(temp)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	
}
void reverse(struct stacknode **top_ref)
{
	//struct stacknode *temp;
	int z;
		
		if(*top_ref!=NULL)
		{
			z=pop(top_ref);
			//insertb(&temp,z);
			reverse(top_ref);
		}
		else
		{
			return;
		}
		
		//printf("\n");
	//	printf("%d**********%u",z,top_ref);
		insertb(top_ref,z);
	
}
void insertb(struct stacknode **top_ref,int z)
{
	if(*top_ref==NULL)
	{
		push(top_ref,z);
		return;
	}
	int data=pop(top_ref);
	insertb(top_ref,z);
	push(top_ref,data);
}
