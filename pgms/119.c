        #include <stdio.h>

        union stu

        {

            int ival;

            float fval;

        };

        void main()

        {

            union stu r;

            r.ival = 5;

            printf("k%f", r.fval);
            printf("p%d", r.fval);

        }
