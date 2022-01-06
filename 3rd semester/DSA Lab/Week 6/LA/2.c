#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};
struct node *head;
void isEmpty()
{
    if (head == NULL)
    {
        printf("The stack is empty ");
    }
    else
    {
        printf("The stack is not empty ");
    }
}

void push()
{
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Not able to push the element");
    }
    else
    {
        printf("Enter the value : ");
        scanf("%d", &val);
        if (head == NULL)
        {
            ptr->val = val;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->val = val;
            ptr->next = head;
            head = ptr;
        }
        printf("Item was pushed");
    }
}

void pop()
{
    int item;
    struct node *ptr;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("Item popped is : %d", item);
    }
}
void display()
{
    int i;
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Printing Stack elements :\n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->val);
            ptr = ptr->next;
        }
    }
}
void popmiddle(int c)
{
    int item;
    struct node *ptr, *temp = head, *temp2;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        for (int i = 0; i < c / 2; i++)
        {
            temp2 = temp;
            temp = temp->next;
        }
        item = temp->val;
        ptr = temp;
        temp2->next = temp2->next->next;
        free(ptr);
        printf("Item popped is : %d", item);
    }
}
void reverse()
{
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void sorting(struct node *current, struct node *index)
{
    int t;
    struct node *temp = current->next;
    if (index == NULL)
    {
        return;
    }
    else
    {
        while (temp != NULL)
        {
            if (current->val > temp->val)
            {
                t = current->val;
                current->val = temp->val;
                temp->val = t;
            }
            temp = temp->next;
        }
        sorting(index, index->next);
    }
}
void removeDuplicates()
{
    sorting(head,head->next);
    struct node* current = head;
    struct node* next_next;
    if (current == NULL)
    {
       return;
    }
    while (current->next != NULL)
    {
       if (current->val == current->next->val)
       {         
           next_next = current->next->next;
           free(current->next);
           current->next = next_next; 
       }
       else 
       {
          current = current->next;
       }
    }
}
void main()
{
    int count = 0;
    int choice = 0;
    printf("\n*********Stack operations using linked list*********");
    printf("\n----------------------------------------------");
    while (1)
    {
        printf("\nChose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Check if stack is empty\n5.Delete middlemost element\n6.Reverse the stack\n7.Sort the stack\n8.Remove duplicate elements\n9.Exit");
        printf("\nEnter your choice :  \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            count++;
            break;
        case 2:
            pop();
            count--;
            break;
        case 3:
            display();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            popmiddle(count);
            break;
        case 6:
            reverse();
            break;
        case 7:
            sorting(head, head->next);
            break;
        case 8:
            removeDuplicates();
            break;
        case 9:
            printf("Exiting....");
            exit(0);
        default:
            printf("Please Enter valid choice ");
        };
    }
}
