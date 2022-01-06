#include <iostream>
using namespace std;
class Rectangle
{
public:
    int l, b;
    int area1 = 0;

    void getdata()
    {
        cout << "\nEnter the length and breadth ";
        cin >> l >> b;
    }
    void area()
    {
        area1 = l * b;
        cout << "\nThe area of rectangle " << area1;
    }
};
class Triangle
{
public:
    int base, height;
    int area2 = 0;
    void getdata()
    {
        cout << "\nEnter the base and height ";
        cin >> base >> height;
    }
    void area()
    {
        area2 = 0.5 * base * height;
        cout << "\nThe area of triangle " << area2;
    }
};
class Area : public Triangle, public Rectangle{};
int main()
{
    Area obj;
    obj.Rectangle::getdata();
    obj.Rectangle::area();
    obj.Triangle::getdata();
    obj.Triangle::area();
    return 0;
}