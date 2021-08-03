#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
   long int n=0;
   cout<<"Enter the binary input element : "<<endl;
   cin>>n;
   
   int k=0;
   int deci_n=0;
   while (n>0)
   {
       deci_n=deci_n+((n%10)*pow(2,k));
       k++;
       n=n/10;
   }
   cout<<"The given input in decimal is : "<<deci_n<<endl;
}