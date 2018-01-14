#include<stdio.h>
void allocate(int *p) 
{ 
p=(int *)malloc(sizeof(int)); 
p=10; 
} 

int main() 
{ 
	int *p=NULL; 
	allocate(p); 
	printf("\n%s\n", p?(*p):"(null)"); 
	return 0;
}
