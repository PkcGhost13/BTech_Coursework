#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
    int a, b;

public:
    void getvalue()
    {
        cout << "Enter the Real and Imaginary part of the Number :";
        cin >> a >> b;
    }

    friend void operator++(complex &obj);

    friend void operator--(complex &obj);

    void display()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
void operator++(complex &obj)
{
    obj.a = ++obj.a;
    obj.b = ++obj.b;
}

void operator--(complex &obj)
{
    obj.a = --obj.a;
    obj.b = --obj.b;
}
int main(void)
{
    complex obj;
    obj.getvalue();
    cout << "Given Complex Number :\n";
    obj.display();
    ++obj;
    cout << "Incremented Complex Number :\n";
    obj.display();
    --obj;
    --obj;
    cout << "Decremented Complex Number :\n";
    obj.display();
    return 0;
}