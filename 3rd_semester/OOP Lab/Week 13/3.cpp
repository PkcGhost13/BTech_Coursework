#include <iostream>
using namespace std;

class A
{
public:
    int vb;
    void display()
    {
        cout << "Displaying Base class"
             << " variable vb: " << vb << endl;
    }
};

class B : public A
{
public:
    int vd;
    void display()
    {
        cout << "Displaying Base class"
             << " variable vb: " << vb << endl;
        cout << "Displaying Derived "
             << " class variable vd: "
             << vd << endl;
    }
};

int main()
{
    A *bcp;
    A ob;
    B od;

    bcp = &od;

    bcp->vb = 34;
    bcp->display();

    bcp->vb = 3400;
    bcp->display();

    B *dcp;
    dcp = &od;
    dcp->vb = 9448;
    dcp->vd = 98;
    dcp->display();
    return 0;
}