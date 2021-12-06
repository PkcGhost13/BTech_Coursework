#include <iostream>
using namespace std;

class Distance
{
    public:
    int feet;
    int inches;

    void add(Distance A,Distance B)
    {
        feet=A.feet+B.feet;
        inches=A.inches+B.inches;
    }
};
int main(void)
{
    Distance C1,C2,C3;
    cout<<"Enter the distance 1 : "<<endl;
    cout<<"Feet : ";
    cin>>C1.feet;
    cout<<"Inches : ";
    cin>>C1.inches;
    cout<<"Enter the distance 2 : "<<endl;
    cout<<"Feet : ";
    cin>>C2.feet;
    cout<<"Inches : ";
    cin>>C2.inches;
    C3.add(C1,C2);
    cout<<"The sum is : "<<C3.feet<<" feet "<<C3.inches<<" inches "<<endl;
}