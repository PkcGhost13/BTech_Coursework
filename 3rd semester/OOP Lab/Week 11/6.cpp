#include <iostream>
#include <conio.h>

using namespace std;
class String
{
public:
    string s;

    String operator+(String &c1)
    {
        String s1;
        s1.s = this->s + " " + c1.s;
        return s1;
    }

    void display()
    {
        cout << "The conactenated string is : " << this->s << endl;
    }
};

int main(void)
{
    String a, b, c;
    cout << "\nEnter the first string : ";
    cin >> a.s;
    cout << "\nEnter the second string : ";
    cin >> b.s;
    c = a + b;
    c.display();
    return 0;
}