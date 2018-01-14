#include <stdio.h> 
main() {
 int a[18]={10,10,10,10,10,10,10,10,10,10,10,24,10,10,10,10,10,10};
   int i,t;
 for(i=0;i<18;i++) 
{ 
if(a[i+1]<a[i]) 
{ 
t=a[i]; 
a[i]=a[i+1]; 
a[i+1]=t; 
i=-1; 
} 

}
for(i=1;i<=18;i++) 
printf("%d.%d\n ",i,a[i]); 
}
