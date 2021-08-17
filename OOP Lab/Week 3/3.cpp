#include <iostream>
using namespace std;

void swapByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Call By Value";

    cout << "\nAfter Swapping A ="
         << a << endl;
    cout << "\nB = " << b << endl;
}

void swapByReference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Call By Reference";
    cout << "\nAfter Swapping A ="
         << a << endl;
    cout << "\nB = " << b << endl;
}

void swapByAddress(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "Call By Address";
    cout << "\nAfter Swapping A ="
         << *a << endl;
    cout << "\nB = " << *b << endl;
}

int main()
{
    int a, b;
    cout << "Enter Value of A::";
    cin >> a;
    cout << "Enter Value of B::";
    cin >> b;

    swapByValue(a, b);
    swapByReference(a, b);
    swapByAddress(&a, &b);
}