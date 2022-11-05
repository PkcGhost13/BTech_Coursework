//bfs in directed graph
#include <stdio.h>
#include <stdlib.h>
int a[100][100], q[100], visited[100], n, i, j, f = 1, r = -1;
void bfs(int v)
{
    for (i = 1; i <= n; i++)
        if (a[v][i] && !visited[i])
            q[++r] = i;
    if (f <= r)
    {
        visited[q[f]] = 1;
        bfs(q[f++]);
    }
}
void main()
{
    int v;
    printf("Enter number of vertices:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        q[i] = 0;
        visited[i] = 0;
        for (j = 1; j <= n; j++)
            a[i][j] = 0;
    }
    printf("Enter the adjacency matrix: ");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the starting vertex: ");
    scanf("%d", &v);
    bfs(v);
    printf("The node which are reachable are: ");
    for (i = 1; i <= n; i++)
        if (visited[i])
            printf("%d ", i);
        else
        {
            printf("\nBFS is not possible. Not all nodes are reachable");
            break;
        }
    printf("\n");
}
