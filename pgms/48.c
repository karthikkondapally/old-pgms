#include<stdio.h>
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int b[10]={-1},i,j;
for (i=1;i<10;i++)
for (j=1;j<10;j=j+i+1)
