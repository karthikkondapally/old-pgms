int main()
{
// char str[5];
char  str[] = "GfG";     /* Stored in read only part of data segment */
 *(str+1) = 'n'; /* Problem:  trying to modify read only memory */
str[2]= 'n';
printf("%s\n",str); 
getchar();
 return 0;
}
