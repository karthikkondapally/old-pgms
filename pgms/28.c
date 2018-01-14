#include<stdio.h>

main()
{

int x=6;

printf("%d,%d,%d\n",x++,++x);
x=6;
printf("%d,%d,%d\n",x++,++x);
x=6;
printf("%d,%d,%d\n",x++,x--);
x=6;
printf("%d,%d,%d\n",++x,--x);
x=6;
printf("%d,%d,%d\n",x++,x++);

}
