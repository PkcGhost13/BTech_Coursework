#include <iostream>
using namespace std;
int main()
{
    try
    {
        int n;
        cout << "Enter the number";
        cin >> n;
        throw(n);
    }
    catch (int j)
    {
        if (j == 0)
        {
            cout << "zero entered";
        }
        else if (j < 0)
        {
            cout << "negative exception";
        }
        else
        {
            cout << "positive exception";
        }
    }
}