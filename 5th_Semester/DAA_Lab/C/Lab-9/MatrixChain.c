#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#define INF 1000000009

int min(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}

int min_operation(int v[], int n) 
{ 
    int dp[n+1][n+1];
    memset(dp,INF,sizeof(dp));
    for(int i=1;i<n;i++)
    {
        dp[i][i]=0;
    }
    int ran;
    for(int i=2;i<n;i++) 
    { 
        for(int j=1;j<n-i+1;j++) 
        { 
            ran=i+j-1; 
            for(int k=j;k<=ran-1;k++) 
            {
                dp[j][ran]=min(dp[j][ran],dp[j][k]+dp[k+1][ran]+v[j-1]*v[k]*v[ran]); 
            } 
        } 
    }
    return dp[1][n-1]; 
}

int main() 
{
    int n;
    printf("Enter the number of matrices : ");
    scanf("%d", &n);
    int chain[n];
    printf("Enter the dimensions of the matrices : ");
    for(int i=0;i<n+1;i++)
    {
        scanf("%d", &chain[i]);
    }
    int ans=min_operation(chain,n+1);
    printf("The minimum number of operations required is : %d\n", ans);
    return 0;
}
