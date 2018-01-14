char *myfunc1()
{
char *temp = "string";
return temp;
}
/*char *myfunc2()
{
char temp[] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};
return temp;
}*/
int main()
{
puts(myfunc1());
//puts(myfunc2());
}

