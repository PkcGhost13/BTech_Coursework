#include <iostream>
using namespace std;

void addByValue(int a, int b)
{
    cout << "Call By Value";
    cout << "\n Sum is = "
         << a+b << endl;
}

void addByReference(int &a, int &b)
{
    cout << "Call By Reference";
    cout << "\n Sum is = "
         << a+b << endl;
}

void addByAddress(int *a, int *b)
{
    cout << "Call By Address";
    cout << "\n Sum is = "
         << *a+*b << endl;
}

int main()
{
    int a, b;
    cout << "Enter Value of A::";
    cin >> a;
    cout << "Enter Value of B::";
    cin >> b;

    addByValue(a, b);
    addByReference(a, b);
    addByAddress(&a, &b);
}