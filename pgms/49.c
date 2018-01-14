#include<stdio.h>
int myatoi(const char *string);
int main(int argc, char* argv[])
{
printf("\n%d\n", myatoi("1998"));
//getch();
return(0);
}

int myatoi(const char* string)
{
int value = 0;
if (string)
{
while (*string && (*string <= '9' && *string >= '0'))
{
printf("%d\t",value);
value = (value * 10) + (*string - '0');
string++;
}
}
return value;
}




