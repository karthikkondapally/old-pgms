#include<iostream>
#include<stdio.h>
main()
{
int q,w,i,j,i1,i2,i3,i4,p=0,k,l;
char a[1000][1000];
int count[1000][1000];
scanf("%d,%d",&j,&i);
for(k=0;k<i;k++)
for(l=0;l<j;l++)
{
scanf("%c",&a[k][l]);
if(a[k][l]=='S')
{
i1=k;
i2=l;
}

if(a[k][l]=='G')
{
i3=k;
i4=l;
}

if(a[k][l]=='@')
{
count[k][l]=1;
p++;
}
}

q=i1;
w=i2;
while(1)
{
break;

}


}

