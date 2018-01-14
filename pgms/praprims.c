#include<stdio.h>
#include<limits.h>
#include<stdio.h>
//#define INF 999
main()
{
	int cost[20][20],t[20][2],i,j,k,n,l,p,q,x,y,near[10],mincost=0,minedge;
	printf("\n Enter no.of vertices");
	scanf("%d",&n);
	printf("\n Enter Cost matrix ");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
                         if (cost[i][j]==0) 
cost[i][j]=999;
		}
	}
	minedge=cost[1][1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(minedge>cost[i][j])
			{
				minedge=cost[i][j];
				p=i;
				q=j;
			}
		}
	}
	mincost=minedge;
	t[0][0]=p;
	t[0][1]=q;
	
	for(i=1;i<=n;i++)
	{
		if(cost[i][q]<cost[i][p])
		{
			near[i]=q;
		}
		else
		{
			near[i]=p;
		}
	}
	near[p]=0;
	near[q]=0;
	int count=1;
	for(i=1;i<=n;i++)
	{
		j=i;
		minedge=INT_MAX;
		for(k=1;k<=n;k++)
		{
			if(near[k]!=0 && cost[k][near[k]]<minedge)
			{
				minedge=cost[k][near[k]];
				x=k;
				y=near[k];
			}
		}
		if(count<=n-2)
		{
		t[i][0]=x;
		t[i][1]=y;
		near[x]=0;
		mincost=mincost+minedge;
		}
		count++;
		for(p=1;p<=n;p++)
		{
			if(near[p]!=0 && cost[p][near[p]]>cost[p][x])
			{
				near[p]=x;
			}
		}
	}
	printf("\n minimum cost= %d",mincost);
	for(i=0;i<n-1;i++)
	{
		printf("\n %d----%d",t[i][0],t[i][1]);
	}
}	
	
