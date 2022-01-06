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

    friend void operator-(Number &obj);

    void display()
    {
        cout << "a : " << a << " b : " << b << endl;
    }
};
void operator-(Number &obj)
{
    obj.a = -obj.a;
    obj.b = -obj.b;
}
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