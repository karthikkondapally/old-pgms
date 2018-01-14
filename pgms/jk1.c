#include<stdio.h>
int main()
{
    int a=0xabcdef;
    char *p;
    p=&a;
    printf("%x\n",*p);
    return 0;
}








