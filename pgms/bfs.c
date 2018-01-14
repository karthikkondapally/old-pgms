#include<stdio.h>

int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1,c=1;
void bfs(int v)
{
printf("%d\n",v);
visited[v]=1;
while(1)
{
for (j=1;j<=n;j++)
{
if(a[v][j] & (visited[j]!=1))
{
q[++r]=j;
printf("%d\n",j);
visited[j]=1;
c++;
}
}

v=q[f++];
//bfs(v,c);
if(c>=n)
break;

}

}
void main()
{
 int v;
 //clrscr();
 printf("\n Enter the number of vertices:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  q[i]=0;
  visited[i]=0;
 }
 printf("\n Enter graph data in matrix form:\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   scanf("%d",&a[i][j]);
 printf("\n Enter the starting vertex:");
 scanf("%d",&v);
 bfs(v);
 printf("\n The node which are reachable are:\n");
}
