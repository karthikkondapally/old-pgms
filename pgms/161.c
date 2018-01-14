#include<stdio.h>
main()
{
char a[3]={2,3,4};
char *p;
p=a;
p=(char *)((int *)(p));
printf("%d\n",*p);
p=(int *)(p+1);
printf("%d\n",*p);
}
