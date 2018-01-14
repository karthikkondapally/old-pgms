#include <stdio.h>
int mystrcmp(const char *s1, const char *s2);
int main()
{
printf("\nstrcmp() = [%d]\n", mystrcmp("karthik","pranay"));
printf("\nstrcmp() = [%d]\n", mystrcmp("karthi","karthik"));
printf("\nstrcmp() = [%d]\n", mystrcmp("A","A"));
return(0);
}
int mystrcmp(const char *s1, const char *s2)
{
while (*s1==*s2)
{
if(*s1=='\0')
return(0);
s1++;
s2++;
}
return(*s1 - *s2);
}
