#include<stdio.h>
int s;
main()
{
int T,i,j,p[1000];
scanf("%d",&T);
for(i=0;i<T;i++)
scanf("%d",&p[i]);

for(i=0;i<T;i++)
nextPalindrome(p[i]+1);
}

nextPalindrome(int p)
{

while(1)
{
s=checkPalindrome(p);

if(s==1)
{
printf("%d\n",p);
break;
}
else 
p++;

}
}


int checkPalindrome(int p)
{
int l=0,k,s;
s=p;
while(p>0)
{
k=p%10;
p=p/10;
l=l*10+k;
}
if(s==l)
return 1;
else 
return 0;

}

