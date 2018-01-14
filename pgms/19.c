#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp = fopen("C:\\myfile.txt", "w");
   
  if(fp == NULL)
  {
    printf("\n could not open file ");
    getchar();
    exit(1);
  } 
   
  fprintf(fp, "%s", "Geeks for Geeks");
   
  /* ....... */
  /* ....... */
  /* Something went wrong so terminate here */ 
  abort();
   
  getchar();
  return 0; 
}  
