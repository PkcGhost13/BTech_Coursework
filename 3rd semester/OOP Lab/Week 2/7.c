/*
7. Wap to create Emp structure having empno, ename, esal. Use input()   
to take input and display function to display.
*/

#include<stdio.h>
struct emp
{
    int empno;
    char ename[100];
    float esal;
}a;
void input()
{
    printf("Enter the Employee number\n");
    scanf("%d",&a.empno);
    printf("Enter the Employee name\n");
    scanf("%s",&a.ename);
    printf("Enter the Employee Salary\n");
    scanf("%f",&a.esal);
}
void display()
{
    printf("The employee number is : %d\n",a.empno);
    printf("Employee name:%s\n",a.ename);
    printf("The employee salary is:%.1f",a.esal);
}
int main()
{
    input();
    display();
    return 0;
}