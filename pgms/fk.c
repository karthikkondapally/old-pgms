#include<stdlib.h>
#include<stdio.h>
#include <sys/types.h>
main()
{
if(fork() && fork())
{
int c= fork();
}
if(fork() || fork())
{
int d = fork();
}

printf(“Hello world”);

}
