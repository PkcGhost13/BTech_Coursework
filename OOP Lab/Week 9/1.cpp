#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
    public:
    int real, img;
  
    Complex(int real=0, int img=0)
    {
        this->real = real;
        this->img =img;
    }

    Complex compare(Complex X , Complex Y)
    {
        double z1, z2;
        Complex r;
        z1 = sqrt(pow(Y.real,2) + pow(Y.img,2));
        z2 = sqrt(pow(X.real,2) + pow(X.img,2));
        if(z1>z2)
        {
          r.real = Y.real;
          r.img = Y.img;
        }    
        else
        {
          r.real = X.real;
          r.img = X.img;
        }
        return r;
    }
};

int main()
{
    int r1,r2,c1,c2;
    cout<<"Enter the first complex number : "<<endl;
    cout<<"Real part : ";
    cin>>r1;
    cout<<"Imaginary part : ";
    cin>>c1;
    cout<<"\nEnter the second complex number : "<<endl;
    cout<<"Real part : ";
    cin>>r2;
    cout<<"Imaginary part : ";
    cin>>c2;
    Complex o1(r1,c1);
    Complex o2(r2,c2);
    Complex o3;
    o3=o3.compare(o1,o2);
    cout<<"Hence the complex number with higher value is :  "<<o3.real<<"+"<<o3.img<<"i"<<endl;
    return 0;
}