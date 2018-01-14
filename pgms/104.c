        #include <stdio.h>

        struct point

        {

            int x;

            int y;

        };

        int main()

        {

            struct point p = {1,2};

            struct point p1 = {1,2};

            if(p = p1)

                printf("equal\n");

            else

                printf("not equal\n");

        }
