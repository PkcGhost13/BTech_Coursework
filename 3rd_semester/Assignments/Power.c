#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
} node;

node *head;

void initialize()
{
    head = NULL;
}

void push(int n)
{
    node *new = (node *)malloc(sizeof(node));
    new->data = n;
    new->next = head;
    head = new;
}
int pop(int pos)
{
    if (head == NULL)
    {
        printf("Error : Underflow \n");
        return 0;
    }
    if (pos == 0)
    {
        int temp=head->data;
        head = head->next;
        return temp;
    }
    node *temp, *ptr = head;
    for (int i = 0; i < pos; i++)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    return (ptr->data);
    free(ptr);
}
int powerStack(int x, int n)
{
    initialize();
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        push(x);
    }
    for (int i = n-1; i >=0; i--)
    {
        product*=pop(i);
    }
    return product;
}
int power(int x,int n)
{
    int product=1;
    for(int i=0;i<n;i++)
    {   
        product*=x;
    }
    return product;
}
int main(void)
{
    int x,n; 
    printf("Enter the value of real x : ");
    scanf("%d",&x);
    printf("Enter the value of integer n : ");
    scanf("%d",&n);
    printf("1. Power function with stack : %d\n",powerStack(x,n));
    printf("2. Power function without stack : %d\n",power(x,n));
    return 0;
}