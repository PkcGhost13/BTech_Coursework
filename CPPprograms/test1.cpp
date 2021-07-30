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
        cin>>x[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
}
