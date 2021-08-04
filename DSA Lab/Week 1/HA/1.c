/*	
Given an unsorted dynamic array arr and two numbers x and y, 
find the minimum distance between x and y in arr. 
The array might also contain duplicates. 
You may assume that both x and y are different and present in arr.
Input: arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}, x = 3, y = 6
Output: Minimum distance between 3 and 6 is 4.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*arr;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    printf(" %d",n);
    return 0;
}