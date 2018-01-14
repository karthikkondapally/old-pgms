#include<stdio.h>
int s;
main()
{
int T,i,j;
long long int p[1000000];
scanf("%d",&T);
for(i=0;i<T;i++)
scanf("%lld",&p[i]);

for(i=0;i<T;i++)
nextPalindrome(p[i]+1);
}

nextPalindrome(long long int p)
{

while(1)
{
s=checkPalindrome(p);

if(s==1)
{
printf("%lld\n",p);

break;
}
else
p++;

}
}


int checkPalindrome(long long int p)
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






