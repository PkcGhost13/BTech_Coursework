#include <iostream>
using namespace std;
class number
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
class calculate : public number
{
public:
    void gcd()
    {

        while (a != b)
        {
            if (a > b)
            {
                a -= b;
            }
            else
            {
                b -= a;
            }
        }

        cout << "gcd is->" << a << endl;
    }
};
int main()
{
    calculate obj;
    obj.getdata();
    obj.gcd();
    return 0;
}