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

    void operator ++()
    {
        a = ++a;
        b = ++b;
    }

    void operator --()
    {
        a = --a;
        b = --b;
    }

    void display()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

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