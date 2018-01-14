#include <stdio.h>

        struct p

        {

      char x : 2;

            int y : 2;

        };

        int main()

        {

            struct p p;

            p.x = 3;

            p.y = 1;

            printf("%d ,%c, %d \n", p.x,p.x,p.y);
            p.x = p.x & p.y;

            printf("%d\n", p.x);

        }
