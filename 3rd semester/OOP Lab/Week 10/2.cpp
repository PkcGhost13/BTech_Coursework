/*
Wap to create One Base class Father data member fname. 
And Son class derived from Father dada member sname . 
And GrandSon derived from Son data member gname. 
Use appropriate function that GrandSon will display all 
name by it concatenating.
*/
#include <iostream>
using namespace std;

class Father
{
public:
    string fname;
    Father()
    {
        cout << "Enter the name of the Father : " << endl;
        cin >> fname;
    }
};
class Son : public Father
{
public:
    string sname;
    Son()
    {
        cout << "Enter the name of the Son : " << endl;
        cin >> sname;
    }
};
class Grandson : public Son
{
public:
    string gname;
    Grandson()
    {
        cout << "Enter the name of the Grandson : " << endl;
        cin >> gname;
    }
    void display()
    {
        string name = fname + " " + sname + " " + gname;
        cout << "The three concatenated names are : " << name;
    }
};
int main()
{
    Grandson obj;
    obj.display();
    return 0;
}