#include <stdio.h>

        struct student

        {

            char *name;

        };

        void main()

        {

            struct student s[2], r[2];

             s[0].name= "alan";
s[1]=s[0];
            printf("%s%s", s[0].name, s[1].name);

        }
