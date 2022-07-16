#include <iostream>
using namespace std;

class A
{
private:
   int x;

public:
   void setX(int x)
   {
      this->x = x;
   }
   void print()
   {
      cout << "x = " << x << endl;
   }
};

int main()
{
   A obj;
   int x = 35;
   obj.setX(x);
   obj.print();
   return 0;
}