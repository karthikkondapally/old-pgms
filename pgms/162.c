#include<stdio.h>
main()
{

static char *s[]={"black","white","pink","violet"};
char **ptr[]={s+3,s+2,s+1,s},***p;
p=ptr;
printf("%s\n",**p);
printf("%s\n",**p+0);
printf("%s\n",**p+2);
printf("%s\n",**p+3);
++p;
printf("%s\n",**p+1);
}

