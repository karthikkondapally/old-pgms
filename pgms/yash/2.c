#include<stdio.h>
main()
{

union a
{
int i;
char ch[2];
};
union a z= {512};
printf("%d,%d\n",z.ch[0],z.ch[1]);



}
