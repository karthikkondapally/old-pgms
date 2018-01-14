        #include <stdio.h>

        struct point

        {

            int x;

            int y;

        };

        void foo(struct point*);

        int main()

        {

            struct point p1 = {1, 2};

            foo(&p1);

        }

        void foo(struct point *p)

        {

            printf("%d\n", (*p).x);

        }
