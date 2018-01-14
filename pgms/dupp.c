#include<stdio.h>
main()
{
	char str[20]="abbbbbaccca";
	//printf("\n Enter String");
	
	int i,l,j,k;
	for(i=0;str[i]!='\0';i++);
	l=i;
	for(i=1;i<l;i++)
	{
		if(str[i]==str[i-1])
		{
			k=i-1;
			for(j=k+2;j<l;j++,k++)
			{
				str[k]=str[j];
			}
			str[l-2]='\0';
			l=l-2;
			i=0;
		}
	}
	printf("\n%s is the new string",str);
}
