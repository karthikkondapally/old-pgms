#include <stdio.h> 
#include<string.h>
int r=1;
int check (char a[])
{
int i,k=-1;
printf("%d",r++);
for (i=0;i<strlen(a);i++)
{
if ( (a[i]==a[i+1]) && (a[i+1]==a[i+2]) )
{
k=i;
i++;
}

if ( (a[i]==a[i+1]) )
k=i;
}
return k;
}


main()
{
char a[]="abbbbaccca";
char b[]="abbbbaccca";
int j,k,i;
kar :
//printf("%d",r++);
k=check(b);
if(k!=-1)
{
j=0;
for(i=0;i<=strlen(b);i++)
{
printf("%d",r++);
if(i!=k)
b[j++]=a[i];

else 
i++;
}
for(i=0;i<=strlen(b);i++)
a[i]=b[i];

k=check(b);
if(k!=-1)
goto kar;
}


printf("\n%s\n",a);
}
