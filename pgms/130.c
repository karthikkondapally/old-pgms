#include<stdio.h>
#include<sys/types.h>
static int i;
main()
{
if (fork() && fork())
fork();

if(fork() || fork())
fork();

printf("%d.hello\n",++i);
}
