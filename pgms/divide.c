#include<stdio.h>
main()
{
 int a,b,sum=0,i;
//float c;
printf(" enter the numbers to be divied\n");
scanf("%d",&a);
scanf("%d",&b);
for(i=1;i<=a;i++)
{

if (i%b==0)
sum=sum+1;

}
printf("answer is %d",sum);
a=100000000000;
b=2;
sum=a/b;
printf("answer is %d",sum);
}
