#include <stdio.h>

        struct student

        {

            char *name;

        };

        struct student s[2], r[2];

        void main()

        {

            s[0].name = "alan";

            s[1] = s[0];

            r[0] = s[1];

            printf("%s%s", r[0].name, r[1].name);

        }
