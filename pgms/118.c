        #include <stdio.h>

        union temp

        {

            int a;

            float b;

            char c;

        };
main()
{
union temp u;
u.c='a';
printf("%d,%f,%c\n",u.a,u.b,u.c);
char t=127;
printf("%c\n",t);
}


