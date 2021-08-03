#include <iostream>
using namespace std;

int main(void)
{
    int n=0;
    cin>>n;
    int x[n];
    int w[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    int sumw=0,pxw=0;
    double mw;
    for(int i=0;i<n;i++)
    {
        sumw+=w[i];
        pxw=pxw+((w[i])*(x[i]));
    }
    mw=pxw*1.0/sumw;
    printf("%0.1lf",mw);
    return 0;
}
