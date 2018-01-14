/*#include<stdio.h>
main()
{
int age1,age2,age3;
printf("Enter the ages of Ram,Shyam and Pranay");
scanf("%d%d%d",&age1,&age2,&age3);
if(age1>age2&&age1>age3)
printf("Ram is elder than shyam and pranay");
else if(age2>age1&&age2>age3)
printf("Shyam is Elder than Ram and Pranay");
else
printf("Pranay is Elder than Ram and Shyam");
}*/ 
/*

#include<stdio.h>
main()
{
int age1,age2,age3;
printf("Enter the ages");
scanf("%d%d%d",&age1,&age2,&age3);
int young=age1;
if(age2<young)
{
young=age2;
printf("age2 is younger");
}
else if(age3<young)
{
young=age3;
printf("age3 is younger");
}
else
{
printf("age 1 is younger");	
}
}*/



#include<stdio.h>
main()
{
int age1,age2,age3;
printf("Enter the age1");
scanf("%d",&age1,&age2);
//printf("Enter the age2");

//scanf("%d",&age2);
if(age1>age2)
{
printf("Enter the age3");
scanf("%d",&age3);
if(age1>age3)
printf("age1 is highest");
else
printf("age3 is highest");
}
else
{
printf("Enter the age3");
scanf("%d",&age3);
if(age2>age3)
printf("age2 is highest");
else
printf("age3 is highest");
}
//printf("%d is highest ",(age1>age2)?((age1>age3)?age1:age3):((age2>age3)?age2:age3));
}

