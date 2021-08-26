#include <iostream>
#include <string.h>
using namespace std;

class test
{
    static int a;
    static int b;

public:
    static void display()
    {
        cout << a << " " << b;
    }
};
int test ::a = 9;
int test ::b = 10;
int main()
{
    test t;
    t.display();
    return 0;
}
