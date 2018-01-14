#include <stdio.h>
#define pra(a,b) a##b
main()
{
//char a[10];

//a=pra("kar","thik");
//printf("%s\n",pra(k,t));

#define merge(a, b) a##b

    printf("%d ", merge(12, 13));
printf("\n%s  ",merge('k','t'));
printf("\n%s\n","k");

}
