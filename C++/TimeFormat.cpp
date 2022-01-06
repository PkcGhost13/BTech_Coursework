#include <iostream>
#include <chrono>
#include <limits.h>
using namespace std;

int main () 
{
    auto begin = std::chrono::high_resolution_clock::now();
    
    int n,*arr;
    printf("Enter the size of the array : ");
    scanf("\n%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    printf("Enter the unsorted array elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the two elements between which distance has to be calculated :\n");
    int x,y,dist=n+1;
    scanf("%d %d",&x,&y);
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            int c=0;
            for(int j=i;j<n;j++)
            {
                if(arr[j]==y )
                {
                    break;
                }
                else if(arr[j]!=y && j==(n-1))
                {
                    f=1;
                }
                else
                {
                    c++;
                }
            }
            if(c<dist && f==0)
            {
                dist=c;
            }
            f=0;
        }
    }
    printf("The minimum distance between the given numbers is : %d\n",dist);
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    printf("Time measured: %f seconds.\n", elapsed.count() * 1e-9);
    return 0;
}