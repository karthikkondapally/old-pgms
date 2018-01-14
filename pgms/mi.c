#include<stdio.h>
#include<stdlib.h>
void f();
main()
{
printf("in main()");
f();
}
void f()
{
static int i=5;
if(i>0)
{
i--;
f();
}
printf("\nvoid f");
//exit(0);
}
