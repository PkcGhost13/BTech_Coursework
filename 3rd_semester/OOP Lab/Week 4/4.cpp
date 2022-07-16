#include <iostream>
#include <string>

using namespace std;

class Student
{
    int roll;
	string name;
	int marks[3];int avg=0;
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
			for(int i=0;i<3;i++)
            {
                cin>>marks[i];
            }
		}
		void displayInfo()
		{
			cout << "Name : " << name << endl;
            cout << "Roll : " << roll << endl;
			cout << "Marks : " << endl;
            for(int i=0;i<3;i++)
            {
                avg+=marks[i];
                cout<<marks[i]<<endl;
            }
            avg/=3;
            cout << "Average Marks : " <<avg<< endl;
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
		cout << "Enter the marks" << endl;
		st[i].getMarks();
	}

	for( int i=0; i<5; i++ )
	{
		cout << "              Student " << i + 1 << endl;
		st[i].displayInfo();
	}
	return 0;
}