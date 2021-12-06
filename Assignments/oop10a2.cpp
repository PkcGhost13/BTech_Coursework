#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class Blank_Character_Exception : public exception
{  
    public:  
        const char * what() const throw()  
        {  
            return "Blank character was entered \n";  
        }  
};  
int main()  
{  
    try  
    {  
        char c;  
        cout << "Enter the character : \n";  
        c=getch();
        if (c == ' ')  
        {  
            Blank_Character_Exception b;  
            throw b;  
        }  
        else  
        {  
            char c1=(char)(c+32);
            cout << "Character : " << c1 << endl;  
        }  
    }  
    catch(exception& e)  
    {  
        cout << e.what();  
    }  
}  