#include<stdio.h>
#include<string.h>
main()
{
char a[]="faaf";
char b[]="gbbg";
int count[256];
int k1=strlen(a);
int flag=0,i,k2=strlen(b);
for(i=0;i<256;i++)
count[i]=-1;
if(k1==k2)
{
for(i=0;i<k1;i++)
{
if(count[a[i]]==-1 )
{ printf("1");
count[a[i]]=b[i];
}

else
if(count[a[i]]!=b[i])
{
putchar(a[i]);
putchar(b[i]);
flag=1;
break;
}
}
}

else
printf("1.not isomorphic");

if(flag==0)
printf("isomorphic");


else
printf("2.not isomorphic");
}
