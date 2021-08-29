#include <iostream>
using namespace std;
class test
{
    static int n;

public:
    test()
    {
        n++;
    }
    ~test()
    {
        n--;
    }
    void static display()
    {
        cout << n;
    }
};
int test::n;
void function1()
{
    test t3, t4;
}
int main()
{
    test t1, t2;
    function1();
    test::display();
}