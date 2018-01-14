#include<stdio.h>
main()
{

int x,*p,y=10;
p=&y;
x=*p*2;
printf("%d",x);
putchar(x-'0');
}
