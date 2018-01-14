#include <stdio.h>

int main() {
    printf("size of int: %d\n", sizeof(int));

    printf("size of short int: %d\n", (int)sizeof(short));

    printf("size of char: %d\n", (int)sizeof(char));

    printf("size of long int: %d\n", (int)sizeof(long));

 //   printf("size of int: %d\n", (int)sizeof(bool));

    printf("size of float : %d\n", (int)sizeof(float));
    printf("size of double: %d\n", (int)sizeof(double));
    printf("size of long duble: %d\n", (int)sizeof(long double));

//    printf("size of int: %d", (int)sizeof(wchar_t));

    return 0;

}
