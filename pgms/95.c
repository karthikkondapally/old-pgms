#include<stdio.h>
myfunction(int ptr)
{
int myvar = 100;
*(ptr) = myvar;
}
main()
{
int *myptr;
myfunction(&myptr);
printf("\n%d",*myptr);

//Use pointer myptr.
}
