#include <iostream>
#include <conio.h>
using namespace std;

class Number
{
    int a, b;

public:

    void input()
    {
        cout << "Enter the two Numbers :";
        cin >> a >> b;
    }

    void operator -()
    {
        a = -a;
        b = -b;
    }

    void display()
    {
        cout <<"a : " <<a << " b : " << b << endl;
    }
};

int main(void)
{
    Number obj;
    obj.input();
    cout << "Given Numbers are :\n";
    obj.display();
    -obj;
    cout << "Negated Numbers are :\n";
    obj.display();
    return 0;
}