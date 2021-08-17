#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cout << "Enter Value of A::";
    cin >> a;
    cout << "Enter Value of B::";
    cin >> b;
    int &a1=a, &b1=b;
    int sum=a1+b1;
    cout<<"The sum of the two numbers by reference variables is : "<<sum<<endl;
    return 0;
}