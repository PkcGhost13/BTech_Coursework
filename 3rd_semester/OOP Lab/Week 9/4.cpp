/*
Create a class student which stores name, 
date-of-birth and date-of-joining of a student. 
The data members date-of-birth and date-of-joining should be the 
objects of another class called 'date'. Input the data for 10 students 
and display it.
*/
#include <iostream>
using namespace std;

class Date
{
    public:
        string dob,doj;
};
class Student :public Date
{
    public:
        string name;
};
int main()
{
    cout<<"Enter the details of 10 students :"<<endl;
    Student obj[2];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter the name : "<<endl;
        cin>>obj[i].name;
        cout<<"Enter the date of birth : "<<endl;
        cin>>obj[i].dob;
        cout<<"Enter the date of joining : "<<endl;
        cin>>obj[i].doj;
    }
    cout<<"The entered student details are : "<<endl;
    cout<<"Name \t\t DOB \t\t DOJ"<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<obj[i].name<<"\t"<<obj[i].dob<<"\t"<<obj[i].doj<<endl;
    }
}