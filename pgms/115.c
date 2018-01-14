        #include <stdio.h>

            struct p

            {

                unsigned char x : 2;

                unsigned int y : 2;

            };

            int x;


        int main()

        {


           p.x = 2;

            printf("%d\n", p.x);

        }


