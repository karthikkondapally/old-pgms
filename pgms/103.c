#include <stdio.h>

        struct p

        {

            int k;

            char c;

            float f;

        };

        int main()

        {

            struct p x = {.c = 97, .f = 3, .k = 1};

            printf("%f\n", x.f);

        }
