#include<stdio.h>
 
// A recursive function used by countWays
int countWaysUtil(int n, int m)
{
    int i,j,res[n];
    res[0] = 1; res[1] = 1;
    for ( i=2; i<n; i++)
    {
       res[i] = 0;
       for ( j=1; j<=m && j<=i; j++)
         res[i] += res[i-j];
    }
    return res[n-1];
}
 
// Returns number of ways to reach s'th stair
int countWays(int s, int m)
{
    return countWaysUtil(s+1, m);
}
 
// Driver program to test above functions
int main ()
{
 int s = 5, m = 2;
    printf("Nuber of ways = %d", countWays(s, m));
//    return 0;
}
