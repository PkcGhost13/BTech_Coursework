#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
    int data;
    struct node *next;
} ds;
int no = 0;
ds *head = NULL;
void insert(int n)
{
    ds *temp=(ds*)malloc(sizeof(ds));
    temp->data=n;
    temp->next=head;
    head=temp;
    no++;
}
void sort()
{
    ds *temp1,*temp2;
    temp1=head;
    while(temp1->next!=NULL)
    {
        temp2=temp1->next;
        while(temp2!=NULL)
        {
            if(temp1->data>temp2->data)
            {
                int temp=temp1->data;
                temp1->data=temp2->data;
                temp2->data=temp;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
}
void removeBottomHalf()
{
    sort();
    int c = 0;
    ds *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        c++;
        if(c==no/2-1)
        {
            no = no / 2;
            head = temp->next;
            break;
        }
    }
}
void display()
{
    ds *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int n;
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        n=rand()%100;
        insert(n);
    }/*
    display();
    sort();
    display();
    removeBottomHalf();
    display();
    return 0;*/
    int c;
    do
    {
        int choice;
        printf("-----------Menu-----------\
        \n1. Insert (x,S)\
        \n2. removeBottomHalf");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the number: ");
                scanf("%d",&n);
                insert(n);
                display();
                break;
            case 2:
                removeBottomHalf();
                display();
                break;
            default:
                printf("Invalid choice");
                break;
        }
        printf("\nDo you want to continue? (1/0) : ");
        scanf("%d",&c);
    }
    while (c!=0);
}
//503130