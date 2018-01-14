#include<stdio.h>

int main(void)
{
static int i=5;
printf("%d",i);
if(--i)
{
main(10);
printf("%d",i);
}
return 0;
}
