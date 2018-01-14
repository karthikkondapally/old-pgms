#include<stdio.h>

struct node
{
int a;
char b;
};

struct node func()
{
struct node p;

p.a = 10;
p.b='z';
return p;
}


main()
{
struct  node g;
g=func();
printf("g.a%d\n",g.a);
printf("g.b%c\n",g.b);
}

