#include <iostream>
using namespace std;
template <class t1, class t2>
class sum
{
    t2 s;
public:
    sum(t1 a, t2 b)
    {
        s = a + b;
    }
    void display()
    {
        cout << "The sum is " << s;
    }
};
int main()
{
    int a;
    float x;
    cout << "\nEnter  integer data : ";
    cin >> a;
    cout << "\nEnter  float data : ";
    cin >> x;
    sum <int,float> obj(a,x);
    obj.display();
}