#include <iostream>
using namespace std;

template <class T>

void Swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{

    int x, y;

    cout << "Enter two numbers:";
    cin >> x >> y;

    cout << "Before Swap:";

    cout << "\nX value is:" << x;
    cout << "\nY value is:" << y;

    Swap(x, y);

    cout << "\n\nAfter swapping using function templates:\n";

    cout << "\nX value is:" << x;
    cout << "\nY value is:" << y;

    return 0;
}