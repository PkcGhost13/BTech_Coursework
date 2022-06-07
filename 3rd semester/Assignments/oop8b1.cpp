#include <iostream>
using namespace std;
double simpleInterest(double P=1000,double R=10,double T=1)
{
    return (P*R*T)/100;
}
int main()
{
    double P,R,T;
    double SI ;
    SI= simpleInterest();
    // here we can see that even though we do not pass any data regarding input we still get a output 
    cout << "Simple Interest = " << SI<<endl;;
    cout<<"Enter the input data P R T : "<<endl;
    cin>>P>>R>>T;
    SI = simpleInterest(P,R,T);
    cout << "Simple Interest = " << SI<<endl;
    return 0;
}