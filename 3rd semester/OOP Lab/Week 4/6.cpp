#include <iostream>
using namespace std;

class Rectangle
{
    double width,height;
    public:
        void input()
        {
            cout<<"Enter the width and height of the rectangle :"<<endl;
            cin>>width;
            cin>>height;
        }
        void displayArea()
        {
            cout<<"The area of the rectangle is : " << width*height <<endl;
        }
};
int main(void)
{
    Rectangle r,*rec;
    r.input();
    rec=&r;
    (*rec).displayArea();
    return 0;
}