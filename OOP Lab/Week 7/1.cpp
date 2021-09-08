#include <iostream>
using namespace std;
class A
{
public:
    int a;
    int b;
    void getdata()
    {
        cout << "enter first no.->";
        cin >> a;
        cout << "enter Second no.->";
        cin >> b;
    }
};
class B : public A
{
public:
    void putdata()
    {
        cout << ">>first no.->" << a << endl;
        cout << ">>second no.->" << b << endl;
    }
};
int main()
{
    B obj;
    obj.getdata();
    obj.putdata();
    return 0;
}