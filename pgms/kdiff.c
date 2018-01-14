#include<stdio.h>
main()
{
int i,j,a[]={1,3,4,5,6,7,8,9,13};
for(i=0;i<9;i++)
for(j=i+1;j<9;j++)
{
if((a[i]-a[j]==8)||(a[j]-a[i]==8))
printf("%d,%d\n",a[i],a[j]);
}


}
