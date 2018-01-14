#include<stdio.h>
#include<string.h>
main()
{
char s[10];

int i,l,j,k;
printf("\n Enter the string");
scanf("%s",s);
char *str;
str=s;
//str=(s+1);
printf("%s",str);
for(i=0;s[i]!='\0';i++);
l=i;
for(i=1;i<l;i++)
{
if(s[i]==s[i-1])
{
k=i-1;
for(j=k+2;j<l;j++)
{
s[k]=s[j];

}
}
}
printf("\n %s is the new string",s);
}
