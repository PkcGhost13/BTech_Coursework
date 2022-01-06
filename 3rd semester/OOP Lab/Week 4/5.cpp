#include<iostream>
using namespace std;
int rarea(int l,int b=5)
{
    return(l*b);
}
float carea(float r)
{
    return(3.14*r*r);
}
float tarea(float bs,float ht=5)
{
   return((bs*ht)/2);
}
/*
int area(int,int);
float area(float);
float area(float,float);
*/
int main()
{
    int l,b;
    float r,bs,ht;
    cout<<"Enter length of rectangle:";
    cin>>l;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"Enter base of triangle:";
    cin>>bs;
    cout<<"\nArea of rectangle is "<<rarea(l);
    cout<<"\nArea of circle is "<<carea(r);
    cout<<"\nArea of triangle is "<<tarea(bs);
}
