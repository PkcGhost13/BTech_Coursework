#include <iostream>
using namespace std;
class B;
class GCD;
class A
{
    int a;

public:
    void input()
    {
        cout << "Enter the value of a  : ";
        cin >> a;
    }
    friend void gcd(A &obj1, B &obj2, GCD &obj3);
};

class B
{
    int b;

public:
    void input()
    {
        cout << "Enter the value of b : ";
        cin >> b;
    }
    friend void gcd(A &obj1, B &obj2, GCD &obj3);
};

class GCD
{
    int result;
    friend void gcd(A &obj1, B &obj2, GCD &obj3);

public:
    void display()
    {
        cout << "The GCD of the two numbers is : " << result;
    }
};

void gcd(A &obj1, B &obj2, GCD &obj3)
{
    int i;
    for (i = 1; i <= obj1.a && i <= obj2.b; ++i)
    {
        
        if (obj1.a % i == 0 && obj2.b % i == 0)
            obj3.result = i;
    }
}

int main(void)
{
    A obj1;
    B obj2;
    GCD obj3;
    obj1.input();
    obj2.input();
    gcd(obj1,obj2,obj3);
    obj3.display();
    return 0;
}