#include<stdio.h>
main()
{
int T,i1,i,j,a[10],b[10];
scanf("%d",&T);

for(i=0;i<(T);i++)
{
scanf("%d%d",&a[i],&b[i]);
}


for(i1=0;i1<(T);i1++)
{

seiveofErastonese(a[i1],b[i1]);
printf("\n");
}
}

seiveofErastonese(int s, int e)
{
//printf("entered seive");
int s1,i,primes[e],j;
for(i=s;i<(e);i++)
{
//printf("set zero");
primes[i]=0;
}

for(i=s;(i<=(e));i++)
if(i!=1)
if(i!=0)
for(j=2;(i*j)<=e;j++)
{
primes[i*j]=1;
//printf("%d ",(i*j));
}

int x=checkPrime(s);
if(x==1)
primes[s]=1;
for(i=s;i<=(e);i++)
{
if(primes[i]==0)
printf("%d\n",i);
}
}

int checkPrime(int s)
{
int i,flag=0;
for(i=2;i<s;i++)
{
if(s%i==0)
{
flag=1;
break;
}
}
return flag;
}
