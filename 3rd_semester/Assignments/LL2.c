#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct LinkedList
{
    int data;
    struct LinkedList *next;
} node;

node *createNode(int n)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = n;
    temp->next = NULL;
    return temp;
}

node *insert(int n, node *head, char c)
{
    node *temp1 = createNode(n);
    temp1->next = head;
    head = temp1;
    printf("Element %d inserted in linked list %c.\n", head->data, c);
    return head;
}

void display(node *head, char c)
{
    node *temp = head;
    if (head == NULL)
    {
        printf("The list %c is empty \n", c);
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->next == NULL)
            {
                printf("%d ", temp->data);
            }
            else
            {
                printf("%d -> ", temp->data);
            }
            temp = temp->next;
        }
        printf("\n");
    }
}

node *commonElements(node *headA, node *headB)
{
    node *common = NULL;
    node *temp1 = headA;
    while (temp1 != NULL)
    {
        node *temp2 = headB;
        while (temp2 != NULL)
        {
            if (temp1->data == temp2->data)
            {
                common = insert(temp1->data, common, 'C');
                break;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return common;
}
node *mergingLists(node *headA, node *headB)
{
    node *merge = NULL;
    node *temp1 = headA, *temp2 = headB;
    while (temp1 != NULL)
    {
        merge = insert(temp1->data, merge, 'D');
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        merge = insert(temp2->data, merge, 'D');
        temp2 = temp2->next;
    }
    return merge;
}
/*
node *delete_pos(node *head, int pos)
{
    if (head == NULL)
    {
        printf("\nUNDERFLOW OCCURED");
        return head;
    }
    if (pos == 1)
    {
        head = head->next;
        return head;
    }
    node *temp, *ptr = head;
    for (int i = 1; i < pos; i++)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    printf("\ndeleted  %d\n", ptr->data);
    free(ptr);
    return head;
}
node *removeDuplicates(node *head)
{
    node *dup = NULL;
    node *temp1 = head, *temp2 = NULL;
    int pos = 0;
    while (temp1 != NULL)
    {
        pos = 0;
        temp2 = temp1->next;
        pos++;
        while (temp2 != NULL)
        {
            if (temp1->data == temp2->data)
            {
                dup = delete_pos(head, pos);
                break;
            }
            temp2 = temp2->next;
            pos++;
        }
        temp1 = temp1->next;
    }
    return dup;
}*/
void removeDuplicate(node *head)
{
    node *current = head, *index = NULL, *temp = NULL;
    if (head == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            temp = current;
            index = current->next;
            while (index != NULL)
            {
                if (current->data == index->data)
                {
                    temp->next = index->next;
                }
                else
                {
                    temp = index;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

int main(void)
{
    int choice;
    node *A = NULL, *B = NULL, *C = NULL, *D = NULL;
    printf("For list A \n");
    do
    {
        int n;
        printf("Enter the element to be stored : ");
        scanf("%d", &n);
        A = insert(n, A, 'A');
        printf("Press 0 to stop and 1 to continue inserting : ");
        scanf("%d", &choice);
    } while (choice != 0);
    display(A, 'A');
    printf("For list B \n");
    do
    {
        int n;
        printf("Enter the element to be stored : ");
        scanf("%d", &n);
        B = insert(n, B, 'B');
        printf("Press 0 to stop and 1 to continue inserting : ");
        scanf("%d", &choice);
    } while (choice != 0);
    display(B, 'B');
    C = commonElements(A, B);
    display(C, 'C');
    D = mergingLists(A, B);
    removeDuplicate(D);
    display(D, 'D');
    /*
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
    */
}