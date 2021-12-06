#include <iostream>
using namespace std;

class Employee
{
    public:
    string empname;
    int id;
    double empsalary;
    virtual void salary()
    {
        cout<<"The salary is : "<<empsalary<<endl;
    };
};
class Regular:public Employee
{
    public:
    double DA;
    double HRA;
    double base_salary;
    void salary()
    {
        empsalary=base_salary+(base_salary*DA/100)+(base_salary*HRA/100);
        cout<<"The salary is : "<<empsalary<<endl;
    }
};
class PartTime:public Employee
{
    public:
    int numofhours;
    double payperhour;
    void salary()
    {
        empsalary=numofhours*payperhour;
        cout<<"The salary is : "<<empsalary<<endl;
    }
};
int main(void)
{
    Regular obj1;
    PartTime obj2;
    cout<<"For regular employee : "<<endl;
    cout<<"Name : ";
    cin>>obj1.empname;
    cout<<"ID : ";
    cin>>obj1.id;
    cout<<"Base salary : ";
    cin>>obj1.base_salary;
    cout<<"Enter the DA rate ";
    cin>>obj1.DA;
    cout<<"Enter the HRA rate ";
    cin>>obj1.HRA;
    obj1.salary();
    cout<<"For par-time employee : "<<endl;
    cout<<"Name : ";
    cin>>obj2.empname;
    cout<<"ID : ";
    cin>>obj2.id;
    cout<<"Number of hours : ";
    cin>>obj2.numofhours;
    cout<<"Pay per hour : ";
    cin>>obj2.payperhour;
    obj2.salary();
}