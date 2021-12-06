#include <iostream>
using namespace std;

class Date
{
public:
    int day, month, year;
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    int daysSinceJan1()
    {
        int dayssincejan1 = 0;
        int monthdays[] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if ((year % 4 == 0) && (year % 100 == 0))
        {
            monthdays[1] = 29;
        }
        else
        {
            monthdays[1] = 28;
        }
        for (int i = 0; i < month - 1; i++)
        {
            dayssincejan1 += monthdays[i];
        }
        dayssincejan1 += day;

        return dayssincejan1;
    }
};
int main(void)
{
    int d, m, y;
    cout << "Enter the date : " << endl;
    cout << "Day : ";
    cin >> d;
    cout << "Month : ";
    cin >> m;
    cout << "Year : ";
    cin >> y;
    Date date(d, m, y);
    int days = date.daysSinceJan1();
    cout << "The number of days since Jan 1 of " << y << " to current date is : " << days << " days." << endl;
    return 0;
}