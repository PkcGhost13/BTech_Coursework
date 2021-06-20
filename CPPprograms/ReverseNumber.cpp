#include <iostream>
using namespace std;

int main(void)
{
    int n=0;
    cout<<"Enter the input element : "<<endl;
    cin>>n;
    int n_copy=n;
    int rev_n=0;
    while(n_copy>0)
    {
        rev_n=(rev_n*10)+(n_copy%10);
        n_copy/=10;
    }
    cout<<"The reverse of the given input is :  "<<rev_n<<endl;
}