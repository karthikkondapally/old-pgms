#include<stdio.h>

main()

{


int (*a)[];
int (*p)[]; 
p=a; /*legal*/
a=p; /*illegal*/ 

char *pt="abcde";
printf("%s",pt+2); 


}
