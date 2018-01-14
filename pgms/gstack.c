#include<stdio.h>
int m=4;
int top=-1;


void display(int stack[])
{
int i;
for( i=top;i>=0;i--)
printf("%d\n",stack[i]);
}




main()
{
int stack[m],a,b;
while(1)
{
printf(" enter 1 to push 0 to exit\n");
scanf("%d",&a);
if(a)
{
scanf("%d",&b);
if(top==m)
{
m++;
stack[m];
}
stack[++top]=b;
display(stack);

}
else
break;
}
}



