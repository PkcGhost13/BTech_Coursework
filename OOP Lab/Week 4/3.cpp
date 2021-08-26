#include <iostream>
#include <string>

using namespace std;

class Employee
{
    int eno,esal;
	string ename;
    double grossSal;
	public:
        void getNo()
        {
            cin>> eno;
        }
		void getName()
		{
			cin>>ename;
		}
		void getSal()
		{
			cin >>esal;
		}
        void calculateGrossSal()
        {
            grossSal=(esal*1.0)+(esal*0.07)+(esal*0.09);
        }
		void displayInfo()
		{
			cout << "Employee Name : " << ename << endl;
            cout << "Employee Number : " << eno << endl;
			cout << "Employee Gross Salary : " << grossSal << endl;
		}
};

int main()
{
	Employee emp[5];
	for( int i=0; i<5; i++ )
	{
		cout << "             Employee " << i + 1 << endl;
		cout << "Enter name :" << endl;
		emp[i].getName();
        cout << "Enter employee no. " << endl;
		emp[i].getNo();
		cout << "Enter basic salary " << endl;
		emp[i].getSal();
        emp[i].calculateGrossSal();
	}
    
	for( int i=0; i<5; i++ )
	{
		cout << "              Employee " << i + 1 << endl;
		emp[i].displayInfo();
	}
	return 0;
}