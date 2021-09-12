#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} list;

list *head = NULL;

void createList(int upper)
{
    head = malloc(sizeof(list));
    list *new, *temp;
    printf("Creating list...........\n");
    if (head == NULL)
    {
        printf("Unable to allocate memory \n");
        exit(0);
    }
    int num;
    num=rand()%50;
    head->prev = NULL;
    head->data = num;
    head->next = NULL;
    temp = head;
    for (int i = 1; i < upper; i++)
    {
        new = malloc(sizeof(list));
        if (new == NULL)
        {
            printf("Unable to allocate memory \n");
            exit(0);
        }
        num=rand()%50;
        new->data = num;
        new->next = temp->next;
        temp->next = new;
        new->prev = temp;
        temp = new;
    }
}
void displayList()
{
    list *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void removeDuplicateFromList()
{
    list *current,*index,*temp;
    for (current = head; current != NULL; current = current->next)
    {
        for (index = current->next; index != NULL; index = index->next)
        {
            if (current->data == index->data)
            {
                temp = index;
                index->prev->next = index->next;
                if (index->next != NULL)
                {
                    index->next->prev = index->prev;
                }
                temp = NULL;
            }
        }
    }
}
int main()
{
    printf("Enter the number of nodes you want in the list : ");
    int n;
    scanf("%d", &n);
    createList(200);
    printf("The list before randomly generated is : \n");
    displayList();
    printf("\nRemoving Duplicates ............\n");
    removeDuplicateFromList();
    printf("The list after removing duplicates is : \n");
    displayList();
    return 0;
}
