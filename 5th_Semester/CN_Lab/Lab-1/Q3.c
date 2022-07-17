#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int ff=255;
    int a[4],k=0;
    while(k<4)
    {
        a[k]=n&ff;
        n=n>>8;
        printf("%d ",a[k]);
        k++;
    }
    if(a[k-1]==0)
    {
        printf("\nLittle Endian ");
    }
    else
    {
        printf("\nBig Endian\n");
    }
    return 0;
}
