#include<stdio.h>

int a=10;



/* Apply the constructor attribute to myStartupFun() so that it
    is executed before main() */
void myStartupFun (void) __attribute__ ((constructor));
 
 
/* Apply the destructor attribute to myCleanupFun() so that it
   is executed after main() */
void myCleanupFun (void) __attribute__ ((destructor));
 
 
/* implementation of myStartupFun */
void myStartupFun (void)
{
    printf ("startup code before main()\n");
}
 
/* implementation of myCleanupFun */
void myCleanupFun (void)
{
    printf ("cleanup code after main\n");
}

fun()

{
printf("in%d fun \n");

}
 
int main (void)
{
    printf ("hello\n");
fun(9);
    return 0;
}
