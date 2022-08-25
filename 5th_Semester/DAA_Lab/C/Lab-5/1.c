#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node *next;
    int flag;
} ll;

ll *head = NULL;
void insert(int data)
{
    ll *new_node = (ll *)malloc(sizeof(ll));
    new_node->data = data;
    new_node->next = NULL;
    new_node->flag = 0;
    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        ll *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void display()
{
    ll *temp = head;
    while (temp->next != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
}
void delete (int data)
{
    ll *temp = head;
    ll *prev = NULL;
    while (temp->data != data)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
}
void search(int);
void findMiddleElement()
{
    ll *s = head;
    ll *f = head;
    while (f != NULL && f->next != NULL)
    {
        s = s->next;
        f = f->next->next;
    }
    printf("\nMiddle Element is : %d\n", s->data);
}
void thirdElementFromLast()
{
    ll *temp = head;
    while (temp != NULL)
    {
        if (temp->next->next->next == NULL)
        {
            printf("\nThird Element from last is : %d\n", temp->data);
            break;
        }
        temp = temp->next;
    }
}
void reverse()
{
    ll *current = head;
    ll *prev = NULL, *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    printf("\nReverse Linked List is : ");
    display();
}
void removeDuplicates()
{
    ll *ptr1, *ptr2, *dup;
    ptr1 = head;
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;
        while (ptr2->next != NULL)
        {
            if (ptr1->data == ptr2->next->data)
            {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup->data);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    printf("\nLinked List without Duplicates is : ");
    display();
}
void detectLoop()
{
    ll *temp = head;
    while (temp != NULL)
    {
        if (temp->flag == 1)
        {
            printf("\nLoop Detected\n");
            printf("\nLoop Start is %d\n", temp->data);
            return;
        }
        temp->flag = 1;
        temp = temp->next;
    }
    printf("\nNo Loop Detected\n");
}
int main(void)
{
    int n;
    printf("Enter the number of elements in the linked list : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        int data;
        scanf("%d", &data);
        insert(data);
    }
    printf("The linked list is : ");
    display();
    findMiddleElement();
    detectLoop();
    thirdElementFromLast();
    removeDuplicates();
    reverse();
    return 0;
}