#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
int min(int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    else if (b < a && b < c)
        return b;
    else
        return c;
}
int main(){
    int n,m;
    printf("Enter size of first array:");
    scanf("%d", &n);
    printf("Enter size of second array:");
    scanf("%d", &m);
    int a[n], b[m];
    printf("Enter first array elements :");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter second array elements :");
    for(int i=0;i<m;i++){
        scanf("%d", &b[i]);
    }
    int dtw[n+1][m+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            dtw[i][j] = 100;
        }
    }
    dtw[0][0] = 0;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            int cost = abs(a[i-1]-b[j-1]);
            int last_min = min(dtw[i-1][j], dtw[i][j-1], dtw[i-1][j-1]);
            dtw[i][j] = cost + last_min;
        }   
    }
    for(int i=0;i<n+1;i++){
        dtw[i][0] = i;
    }
    for(int i=0;i<m+1;i++){
        dtw[0][i] = i;
    }
    printf("DTW matrix is : \n");
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j< m+1; j++)
        {
            printf("%d\t", dtw[i][j]);
        }
        printf("\n");
    }    

}