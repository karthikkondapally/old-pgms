#include<stdio.h>
char str[] = "GfG";

char * getString()
{
   /* Stored in stack segment */
 
  /* Problem: string may not be present after getSting() returns */
  return &(*str);
}    
int main()
{
  printf("%s", getString()); 
  getchar();
  return 0;
}