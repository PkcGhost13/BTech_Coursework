#include <iostream>
using namespace std;
class addition
{
    int a, b, add;

public:
    void input()
    {
        cout << "Enter the value of a and b : ";
        cin >> a >> b;
    }
    void display()
    {
        cout << "The sum is : " << add;
    }
    friend void add(addition &t);
};
void add(addition &t)
{
    t.add = t.a + t.b;
}
int main(void)
{
    addition obj;
    obj.input();
    add(obj);
    obj.display();
    return 0;
}