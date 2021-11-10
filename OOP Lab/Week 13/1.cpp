#include <iostream>
using namespace std;

class Item
{
public:
    int item;
    double price;

    void getData()
    {
        cout << "Enter the item no. : ";
        cin >> item;
        cout << "Enter the price of the item : ";
        cin >> price;
    }
    void display()
    {
        cout << "The item no is : " << item << endl;
        cout << "The price of the item is : " << price << endl;
    }
};
int main(void)
{
    Item obj;
    Item *o = &obj;
    obj.getData();
    obj.display();
    o->display();
}