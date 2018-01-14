#include <stdio.h>
main()
{
int a[5]={3,4,12,1,2},i,t;
for(i=0;i<5;i++)
  {
if(a[i+1]<a[i])
    {  
   t=a[i];
   a[i]=a[i+1];
   a[i+1]=t;     
 i=-1;
    }
  }
for(i=0;i<5;i++)
printf("%d ",a[i]);
}
