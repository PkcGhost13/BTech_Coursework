#include <iostream>
#include <string>

using namespace std;

class Student
{
    int roll;
	string name;
	int marks;
	public:
        void getRoll()
        {
            cin>> roll;
        }
		void getName()
		{
			cin>>name;
		}
		void getMarks()
		{
			cin >> marks;
		}
		void displayInfo()
		{
			cout << "Name : " << name << endl;
            cout << "Roll : " << roll << endl;
			cout << "Marks : " << marks << endl;
		}
};

int main()
{
	Student st[5];
	for( int i=0; i<5; i++ )
	{
		cout << "             Student " << i + 1 << endl;
		cout << "Enter name :" << endl;
		st[i].getName();
        cout << "Enter roll" << endl;
		st[i].getRoll();
		cout << "Enter marks" << endl;
		st[i].getMarks();
	}

	for( int i=0; i<5; i++ )
	{
		cout << "              Student " << i + 1 << endl;
		st[i].displayInfo();
	}
	return 0;
}