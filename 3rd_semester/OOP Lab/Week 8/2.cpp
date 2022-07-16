/*
Wap to create 2 base class A & B. 
having respective data member x,y. 
And create derived class GCD from A & B and display 
GCD of x and y using appropriate function.
*/

#include <iostream>

using namespace std;

class A
{
public:
    int x;
    A()
    {
        cout << "Enter the value of X : " << endl;
        cin >> x;
    }
};
class B
{
public:
    int y;
    B()
    {
        cout << "Enter the value of Y : " << endl;
        cin >> y;
    }
};
class GCD : public A, public B
{
public:
    int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        if (b == 0)
            return a;

        if (a == b)
            return a;

        if (a > b)
            return gcd(a - b, b);

        return gcd(a, b - a);
    }
};
int main()
{
    GCD obj;
    int r=obj.gcd(obj.x,obj.y);
    cout<<"The GCD of the given numbers is : "<<r<<endl;
    return 0;
}