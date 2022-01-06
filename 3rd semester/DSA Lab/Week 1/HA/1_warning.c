/*	
Given an unsorted dynamic array arr and two numbers x and y, 
find the minimum distance between x and y in arr. 
The array might also contain duplicates. 
You may assume that both x and y are different and present in arr.
Input: arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}, x = 3, y = 6
Output: Minimum distance between 3 and 6 is 4.
*/

/* 
Warning: Works only in forward direction that is it will work/count only 
from x to y not y to x
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
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
    return 0;
}