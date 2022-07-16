#include <iostream>
using namespace std;
class Father
{
public:
    string name;
    int age;
    void getdata()
    {
        cout << "enter Father Name->";
        cin >> name;
        cout << "enter Father Age->";
        cin >> age;
    }
};
class Son : public Father
{
    string name1;
    int age1;

public:
    void data()
    {
        cout << "enter Son Name->";
        cin >> name1;
        cout << "enter Son Age->";
        cin >> age1;
    }
    void check()
    {
        if (age1 > age)
        {
            cout << "error 404 ";
        }
        else
        {
            cout << ">>Father's Name->" << name << endl;

            cout << ">>Father's Age->" << age << endl;
            cout << ">>Son's Name->" << name1 << endl;

            cout << ">>Son's Age->" << age1 << endl;
        }
    }
};
int main()
{
    Son obj;
    obj.getdata();
    obj.data();
    obj.check();
    return 0;
}