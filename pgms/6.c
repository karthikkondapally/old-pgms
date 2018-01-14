#include<stdio.h>
 
int main()
{
  int M = 2;
 int arr[M][M]; // Trying to initialize all values as 0
  int i, j;

while(M!=4)
{
 arr[M][M];

  for (i = 0; i < M; i++)
  {
    for (j = 0; j < M; j++)
       printf ("%d ", arr[i][j]);
    printf("\n");
  }
M++;
}
  return 0;
}
