        #include <stdio.h>

        #include <stdarg.h>

        int f(char c, ...);

        int main()

        {

            char c = 97, d = 98;

            f(c, d);

            return 0;

        }

        int f(char c, ...)

        {

            va_list li;

            va_start(li, c);

            char d = va_arg(li, int);

            printf("%c\n", d);

            va_end(li);

        }
