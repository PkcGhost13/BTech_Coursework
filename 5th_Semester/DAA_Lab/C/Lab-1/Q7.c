#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
    int data;
    struct node *next;
} ll;

ll *head = NULL;
void printll()
{
    ll *temp=head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void create(int n)
{
    while (n > 0)
    {
        ll *temp = malloc(sizeof(ll));
        temp->data = rand() % 100;
        temp->next = head;
        head = temp;
        n--;
    }
    printll();
}

void pairwiseSwap()
{
    ll *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        int t = temp->data;
        temp->data = temp->next->data;
        temp->next->data = t;
        temp = temp->next->next;
    }
    printf("List after change : \n");
    printll();
}
int main()
{
    clock_t t = 0;
    printf("Enter the size (n) : ");
    int n;
    scanf("%d", &n);
    t = clock();
    create(n);
    pairwiseSwap();
    t = clock() - t;
    printf("\nTime taken : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
    return 0;
}
/*
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int pairSwap(int arr[], int n)
{
    if (n % 2 != 0)
        n = n - 1;
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(&arr[i], &arr[i + 1]);
    }
}
int main(void)
{
    clock_t t = 0;
    printf("Enter the size of the array (n) : ");
    int n;
    scanf("%d", &n);
    int arr[n];
    t = clock();
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()/100000;
    }
    printf("\nThe entered array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    pairSwap(arr, n);
    printf("\nThe swapped array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    t = clock() - t;
    printf("\nTime taken : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
    return 0;
}*/