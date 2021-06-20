#include<iostream>
using namespace std;
float floatSum(float A, float B)
{
  return A + B;
}
int main() 
{
    float A,B;
    cin>>A;
    cin>>B;
   float c=floatSum(A,B);
    cout<<c;
  return 0;
}

