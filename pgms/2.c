#include<stdio.h>


main()
{


char ch, file_name[25];
   FILE *fp;
int t,i,n,m,p,ch1;
 
   
 
   fp = fopen("1","r"); // read mode
 
  if (fp==NULL) return 0;
  // printf("The contents of %s file are :\n", file_name);
 
   while( ( ch = fgetc(fp) ) != '\n' )
     { 
      
t=ch-48;
      printf("%d\n",t);
      
      }


while( ( ch = fgetc(fp) ) != ' ' )

{n=ch-48;
printf("%d\n",n);
}

while( ( ch = fgetc(fp) ) != ' ' )
{
m=ch-48;
printf("%d\n",m);

}

ch = fgetc(fp);
p=ch-48;
printf("%d\n",p);



   fclose(fp);
   return 0;





/*for(i1=0;i1<t;i2++)
{

for(i2=0;i2<n;i2++)
{
for(i=0;i<n;i++)
for(j=0;j<n;j++)

}



}

*/



}

