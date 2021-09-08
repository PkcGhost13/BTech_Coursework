#include <iostream>
using namespace std;
class rectangle
{
public:
    int width;
    int height;
    void getdata()
    {
        cout << "enter width of rectangle->";
        cin >> width;
        cout << "enter heigth of rectangle->";
        cin >> height;
    }
};
class area : public rectangle
{
public:
    void rarea()
    {
        cout << "area of rectangle is->" << width * height << endl;
    }
};
int main()
{
    area obj;
    obj.getdata();
    obj.rarea();
    return 0;
}