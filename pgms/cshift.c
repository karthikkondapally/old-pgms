#include<stdio.h>
main()
{
unsigned int x=256,y=(25),z,k;
z=x;
x<<=y;
if((32-y)>0)
z>>=(32-y);
else
z>>=(y-32);
k=x|z;
printf("%u\n",k);
}
