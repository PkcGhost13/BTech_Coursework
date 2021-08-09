#include <stdio.h>
#include <stdlib.h>
int numberofDigits(int n)
{
    int c=0;
    while(n>0)
    {
        c++;
        n/=10;
    }
}
int reverse(int n)
{
    int r=0;
    while(n>0)
    {
        r=(r*10)+(n%10);
        n/=10;
    }
    return r;
}
int Ninecomplement(int n)
{
    int r1=0;
    int r=0;
    while(n>0)
    {
        int m=n%10;
        r1=(r1*10)+(9-m);
        n/=10;
    }
    r=reverse(r1);
    return r;
}
int NinecomplementSubtraction(int n1,int n)
{
    int n2=Ninecomplement(n);
    int r=0;
    int d=numberofDigits(n1);
}
int main()
{
    printf("Enter the number: \n");
    int n;
    scanf("%d",&n);
    int r=Ninecomplement(n);
    printf("The result is : %d\n",r);
    return 0;
}
