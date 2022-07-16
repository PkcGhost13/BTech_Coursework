#include <iostream>
using namespace std;

class simpleInterest
{
    float p, t, r, interest;

public:
    void getPrincipal()
    {
        cin >> p;
    }
    void getTime()
    {
        cin >> t;
    }
    void getRate()
    {
        cin >> r;
    }
    float sI()
    {
        return (p * r * t) / 100;
    }
};

int main()
{
    simpleInterest si;
    cout << "Enter Principal Amount : ";
    si.getPrincipal();
    cout << "Enter the Time : ";
    si.getTime();
    cout << "Enter the rate : ";
    si.getRate();
    float interest = si.sI();
    cout << "Interest = " << interest << endl;
    return 0;
}