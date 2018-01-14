#include<stdio.h>
int fun();
main()
{
int (*p)()=fun;
(*p)();
}
int fun()
{
printf("hello\n");
return 0;
}
