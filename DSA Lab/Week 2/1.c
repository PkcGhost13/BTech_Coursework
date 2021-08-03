/*WAP to store n employee’s data such as employee name, gender,
designation, department, basic pay. Calculate the gross pay of each
employees as follows:
Gross pay = basic pay + HR + DA
HR=25% of basic and DA=75% of basic.*/
#include<stdio.h>
struct employee
{
    int salary;
    double gross_salary;
    char gender[50],department[50],designation [50];
    char name[50];
};
 
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    struct employee emp[n];
    for(i=0;i<n;i++)
    {
        printf("Enter employee info as name, gender, designation, department, basic salary \n");
        scanf("%s %s %s %s %d",&emp[i].name,&emp[i].gender,&emp[i].designation,&emp[i].department,&emp[i].salary);
    }
    
    printf("\nEMP_NAME\tEMP_GENDER\tEMP_DESIGNATION\t\tEMP_DEPARTMENT\t\tEMP_GROSS SAL\n");
    for(i=0;i<n;i++)
    {
        emp[i].gross_salary=emp[i].salary+(emp[i].salary*0.25)+(emp[i].salary*0.75);
        printf("%s \t\t %s \t\t %s \t\t\t %s \t\t\t %lf \n",emp[i].name,emp[i].gender,emp[i].designation,emp[i].department,emp[i].gross_salary);
    }
}