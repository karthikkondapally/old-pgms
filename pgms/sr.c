#include<stdio.h>
void func(char *);
int main()
{
char str[]="sbaabaabacc";
func(str);
return 0;
}
void func(char *ptr)
{
char str[10];
int i=0;
while(*ptr!='\0')
{
if(*ptr==*(ptr+1)){
ptr=ptr+2;
}
else {
//s[i++]=*ptr;
printf("%c",*ptr);
ptr++;
}
}
}
