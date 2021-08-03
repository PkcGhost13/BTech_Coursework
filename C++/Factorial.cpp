#include <iostream>
using namespace std;

int main(void)
{
    int n=0;
    cout<<"Enter the input element :"<<endl;
    cin>>n;
    int fact_n=1;
    for (int i=1;i<=n;i++)
    {
        fact_n*=i;
    }
    cout<<"The factorial of the given number is :\t"<<fact_n<<endl;
    return 0;
}
