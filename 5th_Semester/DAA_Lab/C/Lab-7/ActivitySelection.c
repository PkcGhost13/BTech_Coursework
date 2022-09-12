#include <stdio.h>
//
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
    printf("Following activities are selected : ");
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {
        if (s[j] >= f[i])
        {
            printf("%d ", s[j]);
            i = j;
        }
    }
}
int main(void)
{
    int n;
    printf("Enter the number of activities: ");
    scanf("%d", &n);
    int s[n], f[n];
    printf("Enter the start time of each activity: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
    printf("Enter the finish time of each activity: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &f[i]);
    printMaxActivities(s, f, n);
}