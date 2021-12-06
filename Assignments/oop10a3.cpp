#include <iostream>
using namespace std;

class Detail
{
public:
    string name;
    string address;
    int meter_number;
    Detail(string n, string a, int meter)
    {
        name = n;
        a = address;
        meter_number = meter;
    }
    virtual void show()
    {
        cout << "Displaying details : " << endl;
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Meter number : " << meter_number << endl;
    }
};
class PowerBill : public Detail
{
public:
    int n;
    int Total_bill;
    double amt;
    PowerBill(string n, string a, int meter, int no) : Detail(n, a, meter)
    {
        this->n = no;
        amt = 0.0;
    }
    void cal()
    {

        if (n >= 1 && n <= 50)
        {
            amt += n * 2.5;
        }
        else if (n >= 51 && n <= 100)
        {
            amt += n * 5;
        }
        else if (n >= 101 && n <= 200)
        {
            amt += n * 6;
        }
        else
        {
            amt += n * 7.5;
        }
    }
    void show()
    {
        cout << "Displaying details : " << endl;
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Meter number : " << meter_number << endl;
        Total_bill = amt;
        cout << "Monthly Bill Amount to be paid : " << Total_bill << endl;
    }
};
int main(void)
{
    string n, a;
    int meter, no;
    cout << "Enter the details : " << endl;
    cout << "Name : ";
    cin >> n;
    cout << "Address : ";
    cin >> a;
    cout << "Meter Number : ";
    cin >> meter;
    cout << "Number of units used : ";
    cin >> no;
    PowerBill obj(n, a, meter, no);
    obj.cal();
    obj.show();
}