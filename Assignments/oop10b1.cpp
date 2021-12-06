#include <iostream>
using namespace std;

class Distance
{
    public:
    int time;
    int distance;
    
    int operator >(Distance A)
    {
        if(time>A.time)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int operator ==(Distance A)
    {
        if(distance==A.distance)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
};
int main(void)
{
    Distance obj1,obj2;
    cout<<"Enter the distance 1 : "<<endl;
    cout<<"Distance : ";
    cin>>obj1.distance;
    cout<<"Time : ";
    cin>>obj1.time;
    cout<<"Enter the distance 2 : "<<endl;
    cout<<"Distance : ";
    cin>>obj2.distance;
    cout<<"Time : ";
    cin>>obj2.time;
    if(obj1>obj2)
    {
        cout<<"The object with greater time value is : object1 : "<<obj1.time<<endl;
    }
    else
    {
        cout<<"The object with greater time value is : object2 : "<<obj2.time<<endl;
    }
    if(obj1==obj2)
    {
        cout<<"Both the objects contain same distance value"<<endl;
    }
    else
    {
        cout<<"Both the objects do not contain same distance value"<<endl;
    }
}