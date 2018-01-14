#include<stdio.h>
#include<string.h>
int count[1000];
char a[]="baabcuuddupccpuk";
char b[100];
main( )
{
int i,k=0,j=0,p=1;

for(i=0;i<strlen(a);i++)
{
if((a[k]==a[i])&&(i!=k))
{
count[k]=1;
//printf("%d,%c\n",k,a[k]);
//printf("%d,%c\n",i,a[i]);
count[i]=1;
p=1;
continue;
}
if(a[i+1]==a[i+2])
{

if(p)
{
k=i;
p=0;
}
i++;
//printf("%d,%c\n",k,a[k]);
//printf("%d,%c\n",i,a[i]);
continue;
}

if((a[k]!=a[i])&&(p==0))
p=1;

if(a[i]==a[i+1])
i++;
}





for(i=0;i<=strlen(a);i++)
{
if(count[i]==1)
{
continue;
}

if(a[i]==a[i+1])
{
i++;
continue;
}

b[j++]=a[i];
}
//if ((strlen(b)==2)&&(b[0]==b[1]))
//printf("\n");

//else
printf("\n%s\n",b);

}
