int ckeckrow(int &a)
{
k[]={0};
l=0;
for(i=0;i<9;i++)
for(j=0;j<9;j++)
{
k[i]+=a[i][j];
}
for (i=0;i<9;i++)
l+=k[i];
if (l==45)
return 1;
else 
return 0;
}

int checkcolumn(int &a)
{
k[]={0};
l=0;
for(j=0;j<9;j++)
for(i=0;i<9;i++)
{
k[i]+=a[i][j];
}
for (i=0;i<9;i++)
l+=k[i];
if (l==45)
return 1;
else 
return 0;
}

int checkbox(int &a)
{
k[]={0};
l=0;

for(k1=0;i<9;i=+3)
for(k2=0;j<9;j=+3)
for(i=k1,i<3;i++)
for(j=k2,j<3;j++)
{
k[i]+=a[i][j];
}
for (i=0;i<9;i++)
l+=k[i];
if (l==45)
return 1;
else 
return 0;
}
