#include<stdio.h>
#include<string.h>
void swap(char *i,char *j)
{
char t;
t=*i;
*i=*j;
*j=t;
}
void perm(char *str,int i,int n)
{
int j;
if(i==n)
{
printf("%s\n",str);
}
else
{
for(j=i;j<=n;j++)
{
if(i!=j)
swap(str+i,str+j);
perm(str,i+1,n);
if(i!=j)
swap(str+i,str+j);
}
}
}

int main()
{
char string[]="karthik";
int n;
printf("Enter the string");
scanf("%s",string);
n=strlen(string);
perm(string,0,n-1);
return 0;
}
