#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:
    virtual void display()
    {
    }
    virtual float area()
    {
        return 0;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float radius)
    {
        this->radius = radius;
    }

    void setRadius(float radius)
    {
        this->radius = radius;
    }
    float getRadius()
    {
        return this->radius;
    }
    void display()
    {
        cout << "Circle radius: " << this->radius << "\n";
        cout << "Circle area: " << this->area() << "\n";
    }
    float area()
    {
        return 3.14 * this->radius * this->radius;
    }
};

int main()
{

    Shape *s;
    Circle c(5);
    s = &c;
    s->display();
    int k;
    cin >> k;
}