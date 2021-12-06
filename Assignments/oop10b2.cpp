#include <iostream>
using namespace std;
class A
{
public:
    static int count;
public:
    A()
    {
        count++;
    }
};
int A::count=0;
int main()
{
    A stu1;
    cout << "Object count : " << stu1.count<<endl;
    A stu2;
    cout << "Object count : " << stu2.count<<endl;
    A stu3;
    cout << "Object count : " << stu3.count<<endl;
    A stu4;
    cout << "Object count : " << stu4.count<<endl;
    return 0;
}