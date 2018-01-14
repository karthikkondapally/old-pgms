
#include<stdio.h>
main()
??<

int num=511;
(void)printf("\n%d",(*(((unsigned char *)(&num))+1)));
if(*(unsigned char *)&num == 255)
{printf("\nLittle-Endian\n");
}
else
{
printf("Big-Endian\n");
}
??>
