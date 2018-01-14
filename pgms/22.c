int add(int x, int y)
{
    return printf("%*c%*c",  x, ' ',  y, ' ');
}
 
int main()
{
int i;
i= printf("Hello World");
   printf ("Width trick: %d\n",i);
    printf("Sum = %d", add(3, 4));
    return 0;
}
