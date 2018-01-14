#include<stdio.h>
#include"stackop.h"
#include"prehead.h"
#include"reverse.h"

main()
{
struct Node *s= NULL;
int i;
//printf("stack");
//print(s);
for(i=1;i<5;i++)
push(&s,i);
printf("stack\n");
print(s);
printf("\n");
reverse(&s);
printf("\nafter reverse\n");
print(s);

}

