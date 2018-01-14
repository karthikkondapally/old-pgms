#include<stdio.h>

main()
{

int x=6;

printf("%d,",x++ + ++x );
x=6;
printf("%d,",x++ + (x++ + ++x) );

printf("%d,",x=(x++ * x++ * ++x));
printf(",%d,\n",x);
//printf("%d",x++ * x++ * ++x);

printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",x++,--x,++x,++x,x++,x--,--x,x++,x,x++);
x=6;
printf("%d,%d,%d\n",x++,++x,x);
x=6;
printf("%d,%d,%d\n",x++,x--,x);
x=6;
printf("%d,%d,%d\n",++x,--x,x--);
x=6;
printf("%d,%d,%d\n",x++,++x,x);

}
