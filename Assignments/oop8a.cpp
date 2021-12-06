#include <iostream>
#include <math.h>
using namespace std;

class Account
{
public:
    string customer_name;
    int account_no;
    string account_type;
};
class Current_Account : public Account
{
public:
    int MinBalanace = 1000;
    int serviceCharge = 250;
    int f = 0;
    double balance;
    void displayBalance()
    {
        cout << "The current balance of your account is : " << balance << endl;
    }
    void chequebook()
    {
        // function for chequebook functionality but not defined in question
    }
    void withdrawal()
    {
        cout << "Enter the amount you want to withdraw : ";
        double with;
        cin >> with;
        if ((balance - with) > 0)
        {
            cout << "Withdrawn amount : Rs." << with << endl;
            balance = balance - with;
            cout << "Current balance is : Rs." << balance << endl;
        }
        else
        {
            cout << "Your current account balance is less than the withdrawal requested !!" << endl;
            cout << "Current balance is : Rs." << balance << endl;
        }
    }
    void deposit()
    {
        cout << "Enter the amount you want to deposit : ";
        double dep;
        cin >> dep;
        cout << "Deposited amount : Rs." << dep << endl;
        balance = balance + dep;
        cout << "Current balance is : Rs." << balance << endl;
    }
    void minimumBalance()
    {
        cout << "As per account guidelines minimum balance should be >= " << MinBalanace;
        cout << "Current balance is : Rs." << balance << endl;
        if (balance >= MinBalanace)
        {
            cout << "The minimum balance criteria is met no charge is deducted " << endl;
        }
        else
        {
            /*if(f==1)
            {
                return;
            }
            f++;
            */
            // condition for deducting money only once a day
            cout << "The minimum balance criteria is not met a service charge of Rs.250 per day is deducted " << endl;
            balance -= serviceCharge;
            cout << "Current balance is : Rs." << balance << endl;
        }
    }
    void menu()
    {
        int choice;
        cout << "According to your choice your account type is : " << account_type << endl;
        cout << "The choices/options available for your account type are : " << endl;
        cout << "1. Make a deposit\n2. Display balance\n3. Withdrawal\n4. Minimum Balance check " << endl;
        cout << "Select your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            deposit();
            break;
        case 2:
            displayBalance();
            break;
        case 3:
            withdrawal();
            break;
        case 4:
            minimumBalance();
            break;
        default:
            cout << "Wrong choice !!" << endl;
            break;
        }
    }
};
class Savings_Account : public Account
{
public:
    double balance, r = 9.6;
    void displayBalance()
    {
        cout << "The current balance of your account is : " << balance << endl;
    }
    void withdrawal()
    {
        cout << "Enter the amount you want to withdraw : ";
        double with;
        cin >> with;
        if ((balance - with) > 0)
        {
            cout << "Withdrawn amount : Rs." << with << endl;
            balance = balance - with;
            cout << "Current balance is : Rs." << balance << endl;
        }
        else
        {
            cout << "Your current account balance is less than the withdrawal requested !!" << endl;
            cout << "Current balance is : Rs." << balance << endl;
        }
    }
    void deposit()
    {
        cout << "Enter the amount you want to deposit : ";
        int dep;
        cin >> dep;
        cout << "Deposited amount : Rs." << dep << endl;
        balance = balance + dep;
        cout << "Current balance is : Rs." << balance << endl;
    }
    void computeInterest()
    {
        double ci;
        int t, n;
        cout << "Current balance is : Rs." << balance << endl;
        cout << "Enter the time period : ";
        cin >> t;
        cout << "Enter the number of times compounded per annum : ";
        cin >> n;
        ci = balance * (pow((1 + (r / n)), (n * t)));
        cout << "Compound interest on balance is : Rs." << ci << endl;
        balance += ci;
        cout << "Current balance is : Rs." << balance << endl;
    }
    void menu()
    {
        int choice;
        cout << "According to your choice your account type is : " << account_type << endl;
        cout << "The choices/options available for your account type are : " << endl;
        cout << "1. Make a deposit\n2. Display balance\n3. Withdrawal\n4. Minimum Balance check " << endl;
        cout << "Select your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            deposit();
            break;
        case 2:
            displayBalance();
            break;
        case 3:
            withdrawal();
            break;
        case 4:
            computeInterest();
            break;
        default:
            cout << "Wrong choice !!" << endl;
            break;
        }
    }
};
int main()
{
    int type, ch;
    Current_Account obj1;
    Savings_Account obj2;
    do
    {
        cout << "Welcome to Bank of Cpp" << endl;
        cout << "Types of account available are :\n1. Current\n2. Savings" << endl;
        cout << "Enter the account type : " << endl;
        cin >> type;
        switch (type)
        {
        case 1:
            
                cout << "Current account :" << endl;
                cout << "Enter the name of customer : ";
                cin >> obj1.customer_name;
                cout << "Enter the account number : ";
                cin >> obj1.account_no;
                obj1.account_type = "current";
                do
            {
                obj1.menu();
                cout << "Do you want to continue your operations on this account press 1 to continue 0 to exit" << endl;
                cin >> ch;
            } while (ch != 0);
            break;
        case 2:
            
                cout << "Savings account :" << endl;
                cout << "Enter the name of customer : ";
                cin >> obj2.customer_name;
                cout << "Enter the account number : ";
                cin >> obj2.account_no;
                obj2.account_type = "savings";
                do
            {
                obj2.menu();
                cout << "Do you want to continue your operations on this account press 1 to continue 0 to exit" << endl;
                cin >> ch;
            } while (ch != 0);
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
        cout << "Do you want to switch to another account and continue press 1 to continue 0 to exit "<<endl;
        cin >> ch;
    } while (ch!=0);
    return 0;
}