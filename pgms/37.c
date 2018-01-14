#include<stdio.h>
 int initializer(void)
{
    return  50;
}
 
int main()
{
int static const x=8;
    
    static int i = x;
printf(" value of i = %d", i);
    getchar();
    return 0;
}
