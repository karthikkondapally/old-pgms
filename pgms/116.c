#include <stdio.h>

        union u

        {

            struct

            {

                unsigned char x : 2;

                unsigned int y : 2;

            }p;

            int x;

        };

        int main()

        {

            union u u ;
             u.p.x = 2;

            printf("%d\n", u.p.x);

        }
