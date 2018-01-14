#include<stdio.h>
int q[10]={0},i,c=0;
main()
{
g();

}

g()
{


for(i=0;i<10;i++)
printf("%d",q[i]);
printf("\n");
q[c]=1;
c++;
if (c<10)
g();


}
