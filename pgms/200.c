#include<stdio.h>
main()
{
int a=23,b=34;
union kar
{
char a1[a];
char b1[b];
}x;
 int max=sizeof(x);
//putchar();
printf("max is %d\n",max);
}
