#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct personalinfo
{
    char name[50];
    int age;
    double salary;
    struct personalinfo *next;
} node;

node *head, *current;

void initialize()
{
    head = NULL;
}

node *createNode(char n[], int a, double s)
{
    node *temp = (node *)malloc(sizeof(node));
    strcpy(temp->name, n);
    temp->age = a;
    temp->salary = s;
    temp->next = NULL;
    return temp;
}

void insert()
{
    char n[50];
    int a;
    double s;
    printf("Enter the name of the person : ");
    scanf("%s", n);
    printf("Enter the age of the person : ");
    scanf("%d", &a);
    printf("Enter the salary of the person : ");
    scanf("%lf", &s);
    node *temp1 = createNode(n, a, s);
    temp1->next = head;
    head = temp1;
}
void sorting()
{
    node *temp1 = head, *temp2 = NULL;
    char temp[50];
    int an;
    double sn;
    if (head == NULL)
    {
        return;
    }
    else
    {
        while (temp1 != NULL)
        {
            temp2 = temp1->next;

            while (temp2 != NULL)
            {
                if (strcmp(temp1->name, temp2->name) > 0)
                {
                    strcpy(temp, temp1->name);
                    an = temp1->age;
                    sn = temp1->salary;
                    strcpy(temp1->name, temp2->name);
                    temp1->age = temp2->age;
                    temp1->salary = temp2->salary;
                    strcpy(temp2->name, temp);
                }
                temp2 = temp2->next;
            }
            temp1 = temp2->next;
        }
    }
}

void display()
{
    node *temp = head;
    if (head == NULL)
    {
        printf("The list is empty \n");
    }
    else
    {
        while (temp != NULL)
        {
            int i = 1;
            printf("The current list is : \n");
            printf("Sl no. \t Name \t\t Age \t Salary\n");
            while (temp != NULL)
            {
                printf("%d \t %s \t\t %d \t %lf \n", i, temp->name, temp->age, temp->salary);
                i++;
                temp = temp->next;
            }
        }
    }
}

int main(void)
{
    initialize();
    int choice, n;
    do
    {
        printf("\n0. Exit \n1. Enter \n2. Display\n3. Sort\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number of inputs you want to provide : ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                insert();
                printf("\n");
            }
            break;
        case 2:
            display();
            break;
        case 3:
            sorting();
            printf("\nAfter sorting............");
            display();
        }
    } while (choice != 0);
}