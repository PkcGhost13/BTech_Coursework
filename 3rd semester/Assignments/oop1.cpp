#include <iostream>
using namespace std;

class M
{
    public:
        M()
        {
            cout<<"\nIn the constructor of M"<<endl;
        }
};
class N
{
    public:
        N()
        {
            cout<<"\nIn the constructor of N"<<endl;
        }
};
class O
{
    public:
        O()
        {
            cout<<"\nIn the constructor of O"<<endl;
        }
};
class P: M, public virtual N, public O
{
    public:
        P()
        {
            cout<<"\nIn the constructor of P"<<endl;
        }
};
int main(void)
{
    P obj;
    return 0;
}
